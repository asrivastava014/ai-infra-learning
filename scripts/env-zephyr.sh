#!/usr/bin/env bash
# source this:  source scripts/env-zephyr.sh
export ZEPHYR_BASE="$HOME/zephyrproject/zephyr"
export ZEPHYR_TOOLCHAIN_VARIANT=zephyr
export PATH="$HOME/.local/bin:$PATH"
west --version || echo "Install west: pip install west"
