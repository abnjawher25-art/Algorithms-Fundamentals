
```markdown
# 📊 C++ Marks Average Calculator

![C++ Version](https://img.shields.io/badge/C%2B%2B-11%2B-blue.svg)
![License](https://img.shields.io/badge/License-MIT-green.svg)
![Architecture](https://img.shields.io/badge/Architecture-Modular-orange.svg)

A clean, modular C++ console application designed to gather floating-point inputs, aggregate total marks, calculate their average, and display the formatted output within a stylized ASCII terminal banner.

---

## 📥 Download & Repository Setup

You can download and set up this project on your local machine using any of the methods below:

### Option 1: Clone via Git CLI (Recommended)
```bash
git clone [https://github.com/abnjawher25-art/cpp-marks-average-calculator.git](https://github.com/abnjawher25-art/cpp-marks-average-calculator.git)
cd cpp-marks-average-calculator

```

### Option 2: Quick Downloads

| Resource | Format | Direct Link |
| --- | --- | --- |
| **Complete Project** | `.ZIP` | 📦 **[Download Source Archive](https://github.com/abnjawher25-art/cpp-marks-average-calculator/archive/refs/heads/main.zip)** |
| **Raw C++ Code** | `.cpp` | 📄 **[View Raw Code](https://www.google.com/search?q=https://raw.githubusercontent.com/abnjawher25-art/cpp-marks-average-calculator/main/pro10AskThreeNumbersForAverage.cpp)** |
| **GitHub Viewer** | Web | 👁️ **[View Code on GitHub](https://www.google.com/search?q=https://github.com/abnjawher25-art/cpp-marks-average-calculator/blob/main/pro10AskThreeNumbersForAverage.cpp)** |

---

## 🏗️ Code Architecture & Mechanics

The program follows the **Single Responsibility Principle (SRP)** by breaking execution into small, dedicated functional modules.

```
                   +--------------------+
                   |       main()       |
                   +---------+----------+
                             |
            +----------------+----------------+
            |                |                |
            v                v                v
    +---------------+ +---------------+ +------------------+
    | readNumbers() | | GetAverage()  | |  printAverage()  |
    +---------------+ +-------+-------+ +------------------+
                              |
                              v
                     +------------------+
                     | GetSumOfMarks()  |
                     +------------------+

```

### Function Reference

| Function | Return Type | Arguments | Primary Responsibility |
| --- | --- | --- | --- |
| `readNumbers` | `void` | `float arr[3]` | Interactively prompts for 3 numbers and populates array values directly in memory. |
| `GetSumOfMarks` | `float` | `float arr[3]` | Traverses array elements to calculate the accumulated total score. |
| `GetAverage` | `float` | `float arr[3]` | Obtains the total sum and applies floating-point division by 3. |
| `printAverage` | `void` | `float average` | Formats and prints the final result wrapped in an ASCII terminal frame. |

---

## 💡 Deep-Dive Concepts Explored

### 1. Array Decay & Pass-by-Reference

When passing `float arr[3]` to functions like `readNumbers()`, C++ decays the array into a pointer (`float*`) pointing to the first element. Any modifications made inside the function directly manipulate the original array allocated on the stack in `main()`.

### 2. Primitive Memory Optimization

Loop counters use `short` (2 bytes) instead of standard `int` (4/8 bytes) to lower memory usage during tiny boundary iterations ($N = 3$).

### 3. Explicit Type Casting

```cpp
float average = float(GetSumOfMarks(arr)) / 3;

```

Ensures floating-point arithmetic is explicitly maintained during calculation without unexpected type truncation.

---

## 💻 Compilation & Running Instructions

### Prerequisites

A modern C++ compiler such as **GCC (g++)**, **Clang**, or **MSVC**.

### Build Steps

1. **Compile the source file:**
```bash
g++ -O2 pro10AskThreeNumbersForAverage.cpp -o MarksCalculator

```


2. **Execute the binary:**
* **Linux / macOS:**
```bash
./MarksCalculator

```


* **Windows (CMD / PowerShell):**
```cmd
MarksCalculator.exe

```





---

## 🖥️ Sample Run Output

```text
Enter the Mark(1): 88.5
Enter the Mark(2): 92.0
Enter the Mark(3): 79.5
|_________________________|
|_-_-_-_-_-_-_-_-_-_-_-_-_|
|-------------------------|
| The average: 86.6667
|-------------------------|
|_-_-_-_-_-_-_-_-_-_-_-_-_|
|-------------------------|

```

---

## 🛡️ Best Practices Applied

* **High Cohesion:** Input logic, mathematical calculations, and display tasks are isolated from each other.
* **Readable Naming:** Functions and variables clearly document their own purpose.
* **Zero Dependencies:** Relies purely on the C++ Standard Library (`<iostream>`).

```

```
