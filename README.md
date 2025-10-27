# ⚙️ AI Infra & C++ 20 Embedded Systems Journey

[![C++20](https://img.shields.io/badge/C%2B%2B-20-blue.svg?style=flat&logo=c%2B%2B)](https://isocpp.org/)
[![CMake](https://img.shields.io/badge/CMake-4.0%2B-064F8C?logo=cmake)](https://cmake.org/)
[![Python](https://img.shields.io/badge/Python-3.10%2B-yellow?logo=python)](https://www.python.org/)
[![Zephyr RTOS](https://img.shields.io/badge/Zephyr-RTOS-purple?logo=zephyr)](https://zephyrproject.org/)
[![GoogleTest](https://img.shields.io/badge/Tested%20With-GTest-green?logo=google)](https://github.com/google/googletest)
[![Docker](https://img.shields.io/badge/Docker-CUDA%2012.6-2496ED?logo=docker)](https://www.docker.com/)
[![Build](https://img.shields.io/badge/Build-Passing-success.svg)](#)
[![License](https://img.shields.io/badge/License-MIT-lightgrey.svg)](LICENSE)

---


## 🎯 Project Purpose
This repository tracks my professional upskilling roadmap:
- **Rebuild technical depth** in Modern C++ 20/23 after years of limited design exposure.  
- **Master Embedded & RTOS development** using Zephyr and ARM Cortex-M.  
- **Regain design & innovation skills** lost in political work environments.  
- Build a **solid base for AI Infrastructure** — C++ systems + Python ML stack.  
- Maintain a public GitHub portfolio for interviews (target Holi 2026).

---

## 📂 Repository Layout
ai-infra-learning/
├─ README.md
├─ NOTES.md
├─ cpp/ # Modern C++ code & tests
│ ├─ src/
│ ├─ include/
│ └─ tests/
├─ zephyr/ # Zephyr RTOS apps (QEMU + Raspberry Pi later)
├─ notebooks/ # NumPy / ML Jupyter labs
├─ scripts/ # build.sh · env-zephyr.sh · clean.sh
└─ toolchains/ # cross files & debug configs


---

## 🧱 Environment
| Component | Version / Notes |
|------------|----------------|
| **OS** | WSL Ubuntu 22.04 (on Windows 11) |
| **Compiler & Build** | g++ 12.3 · CMake 4.0.3 · Ninja 1.12 |
| **Python Env** | 3.10 + NumPy 2.2 · pandas 2.3 · scikit-learn 1.7 |
| **GPU Stack** | RTX 3050 · CUDA 12.6 via Docker validated |
| **RTOS** | Zephyr SDK + west CLI + QEMU Cortex-M3 |
| **Tools** | VS Code Remote WSL · Git · GoogleTest · Docker |

---

## ✅ Completed So Far ( Aug – Oct 2025 )
- Environment validated (compilers · CUDA Docker · Python · CMake).  
- Repo structure finalized + scripts added.  
- Working C++ snippets → ranges, concepts, constexpr math.  
- Python basics & NumPy notebook ready.  
- ML sanity check (`DecisionTreeClassifier` on Iris dataset).  
- Docker save/load workflow tested.  
- Moved to GoogleTest for unit tests.  
- Git workflow validated (main · feature branches · tags).

---

## 🧭 Upcoming Roadmap
### 📘 Phase 1 ( Oct – Dec 2025 )
**C++ 20 Mastery + Zephyr RTOS Setup**
- Design Patterns in Modern C++  
- Advanced C++ 20 features (ranges · concepts · coroutines · modules basics)  
- Zephyr RTOS basics → threads · GPIO · timers · QEMU runs  
- ARM Cortex-M architecture overview (ready for Pi 5 + Pico)

### 📗 Phase 2 ( Jan – Feb 2026 )
**Embedded Integration + RTOS Design**
- Memory management · ISR · multi-thread design patterns  
- Build automation for Zephyr apps + GTest mocks  
- Simple device drivers & peripherals (LED, UART)  
- Mini project: RTOS Task Scheduler Demo on QEMU then Pi Pico

### 📙 Phase 3 ( Mar – May 2026 )
**AI Infra Bridge**
- Python–C++ interoperability (PyBind11)  
- Data pipelines + ONNX Runtime demo  
- Micro AI on Embedded (TinyML concepts)  
- GitHub polish + mock interviews (DSA + System Design + Embedded)

---

## 📚 References
- *A Tour of C++ (3rd Ed.) – Bjarne Stroustrup*  
- *Design Patterns in Modern C++ – Dmitri Nesteruk*  
- Zephyr Project Documentation & ARM Developer Hub  
- cppreference.com · Modern CMake Cookbook

---

## 💡 Milestone Target
Skill Enhancement and Market Alignment, Getting into the AI
