# Daily Learning Notes

This file captures my daily progress, learnings, and blockers.  
It will serve as my design/learning diary throughout the AI Infra journey.

---

## 🗓 Day 1 (Aug 16–28, 2025)
### ✅ Achievements
- Verified environment:
  - g++ 12.3.0
  - cmake 4.0.3
  - python3 3.10.12
  - Docker GPU passthrough with CUDA 12.6
- Wrote & pushed:
  - `cpp_basics.cpp` (variables, loops, functions)
  - `cpp_pointers_arrays.cpp` (pointers, arrays, pass-by-value/ref)
  - `python_basics.py` (variables, loops, functions)
  - `numpy_basics.ipynb` (array creation, reshape, slice, matrix multiplication)
  - `ml_sanity_check.py` (Decision Tree classifier on Iris dataset)
  - `ranges_pipeline.cpp` (C++20 ranges + lambdas, using `auto&&`)
- Practiced Git workflow:
  - Created branches, merged, pushed commits
  - Fixed merge conflict during LICENSE pull
- Docker image save/load:
  - Saved `nvidia/cuda:12.2.0-base-ubuntu22.04` → `cuda_image.tar`
  - Removed & reloaded successfully

### ⚠️ Issues Faced & Fixes
- **Ranges pipeline error** (const iterator mismatch) → fixed with `auto&&`.
- **gtest setup**: switched from Catch2 to GoogleTest for better industry alignment.
- **Git conflict**: solved with `git pull --rebase` + manual merge.
- **Running Jupyter in Docker**: required `--allow-root` & mapped workspace volume.

---

## 🔮 Next Steps (Day 2)
- Deep dive: **C++ core concepts refresher** (pre-C++11 → C++20 evolution).
- Start **LeetCode practice** (arrays, strings).
- Extend NumPy notebook (stacking, boolean indexing, broadcasting).
- Begin documenting design notes (System Thinking).
