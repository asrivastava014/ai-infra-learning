#!/usr/bin/env bash
# Build & test helper for ai-infra/week1 (CMake + GoogleTest)
# Usage:
#   ./build_and_test.sh           # configure + build + test
#   ./build_and_test.sh -v        # verbose ctest
#   ./build_and_test.sh --clean   # wipe build dir then full run
#   ./build_and_test.sh --test test_basics   # run only a specific test binary
#   ./build_and_test.sh --gen Ninja          # force generator (Ninja/Unix Makefiles)

set -euo pipefail

# ---------- config ----------
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
SRC_DIR="$SCRIPT_DIR"
BUILD_DIR="$SRC_DIR/build"

GENERATOR_DEFAULT="auto"   # "auto" | "Ninja" | "Unix Makefiles"
CTEST_VERBOSE=0
ONLY_TEST_BIN=""
DO_CLEAN=0
GEN="$GENERATOR_DEFAULT"

# ---------- args ----------
while [[ $# -gt 0 ]]; do
  case "$1" in
    -v|--verbose) CTEST_VERBOSE=1; shift ;;
    --clean)      DO_CLEAN=1; shift ;;
    --test)       ONLY_TEST_BIN="${2:-}"; shift 2 ;;
    --gen)        GEN="${2:-}"; shift 2 ;;
    -h|--help)
      sed -n '2,99p' "$0"; exit 0 ;;
    *) echo "Unknown arg: $1"; exit 1 ;;
  esac
done

# ---------- generator decide ----------
choose_generator() {
  if [[ "$GEN" == "Ninja" ]]; then
    echo "Ninja"
  elif [[ "$GEN" == "Unix Makefiles" ]]; then
    echo "Unix Makefiles"
  elif command -v ninja >/dev/null 2>&1; then
    echo "Ninja"
  else
    echo "Unix Makefiles"
  fi
}
GENERATOR="$(choose_generator)"

# ---------- clean ----------
if [[ $DO_CLEAN -eq 1 ]]; then
  echo "🧹 Cleaning $BUILD_DIR"
  rm -rf "$BUILD_DIR"
fi

# ---------- configure ----------
mkdir -p "$BUILD_DIR"
echo "⚙️  Configuring (generator: $GENERATOR)"
cmake -S "$SRC_DIR" -B "$BUILD_DIR" -G "$GENERATOR"

# ---------- build ----------
JOBS="${JOBS:-$(nproc 2>/dev/null || echo 4)}"
echo "🔨 Building (jobs: $JOBS)"
cmake --build "$BUILD_DIR" -j"$JOBS"

# ---------- test ----------
if [[ -n "$ONLY_TEST_BIN" ]]; then
  echo "🧪 Running single test binary: $ONLY_TEST_BIN"
  "$BUILD_DIR/$ONLY_TEST_BIN"
else
  echo "🧪 Running all tests"
  if [[ $CTEST_VERBOSE -eq 1 ]]; then
    ctest --test-dir "$BUILD_DIR" --output-on-failure -V
  else
    ctest --test-dir "$BUILD_DIR" --output-on-failure
  fi
fi

echo "✅ Done."
