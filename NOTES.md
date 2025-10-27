# 📘 Daily & Weekly Learning Notes

This document tracks daily progress, experiments, and reflections across
C++ 20, Embedded Systems, Zephyr RTOS, and AI Infra phases.

---

## 🗓 Timeline Recap
| Period | Focus | Status |
|---------|-------|--------|
| Aug 2025 | Repo creation + Env setup + Day 1 C++/Python tasks | ✅ Completed |
| Sep 2025 | Office transition & project deliverables | ⏸ Paused |
| Oct 25 2025 → Restart | Resuming with C++ 20 & Zephyr foundation | 🚀 Active |

---

## 🧱 Core Setup Validation
- ✅ `g++ 12.3 · CMake 4.0.3 · Python 3.10 · CUDA 12.6`  
- ✅ Docker image load/test (`nvidia/cuda:12.2.0-base-ubuntu22.04`)  
- ✅ Jupyter Lab functional (NumPy demo ok)  
- ✅ GoogleTest integrated in CMake workflow  

---

## 📚 Learning Log – Phase 1 Kickoff
### C++ 20 Re-Foundation
- Refreshed: variables · refs · pointers · loops · functions.  
- Practiced: ranges & lambda composition.  
- Understood: `auto&&` for range views + lvalue/rvalue binding.  
- Explored: `concepts` + `requires` + `std::span`.

### Python Bridge
- Built NumPy arrays (reshape · slice · matmul).  
- Ran DecisionTreeClassifier on Iris dataset → pred = true label ✅.  
- Set up notebooks for broadcasting & stacking (next task).

### Toolchain / Infra
- Docker save/load ✅.  
- Git workflow (clean rebase · branch isolation) ✅.  
- CMake + GTest runner validated through `scripts/build.sh`.  

---

## ⚙️ Next Immediate Steps ( Oct 25 – Nov 7 )
1. Deep dive C++ 20 (Concepts · Ranges · std::span · Design Patterns).  
2. Install Zephyr SDK + run `hello_world` on QEMU Cortex-M3.  
3. Create custom Zephyr app `blinky/` + scripted build pipeline.  
4. Document design insights in NOTES.md daily (keep git clean).  
5. Start Raspberry Pi SDK research for Phase 2.  

---

## 🧩 Concepts Snapshot
- **auto && in templates** → universal reference for perfect forwarding.  
- **Input vs Random Ranges** → why `std::ranges::sort` requires random access.  
- **constexpr vs runtime computation** in C++ 20 constexpr functions.  
- **QEMU** → emulates Cortex-M3 hardware for Zephyr dev without board.  

---

## 🧠 Reflections
> “Consistency outperforms intensity.”  
Every hour spent here is a step away from corporate dependency and toward technical freedom.  

---

## 🔖 Week 1 Complete Check
☑ C++ 20 Snippets Builds  
☑ GTest Running  
☑ Python Sanity Model OK  
☑ Docker Pipeline OK  
☑ Zephyr Env Planned  
☑ GitHub Repo Clean Structure  

---

## 📆 Next Review
➡ **Nov 7 2025:** Confirm Zephyr hello world + concept labs completion before Week 2 start.
