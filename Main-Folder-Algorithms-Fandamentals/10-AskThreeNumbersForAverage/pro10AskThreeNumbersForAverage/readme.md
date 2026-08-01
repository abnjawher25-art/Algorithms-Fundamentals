
```markdown
# 📊 C++ Marks Average Calculator (Modular Architecture)

A highly structured, clean, and maintainable C++ console application designed to gather floating-point user inputs, dynamically aggregate totals, calculate the average, and output results using formatted ASCII borders.

---

## 📥 Download & Repository Setup

You can download and set up this project using any of the options below:

### Option 1: Clone via Git CLI (Recommended)
```bash
git clone [https://github.com/abnjawher25-art/cpp-marks-average-calculator.git](https://github.com/abnjawher25-art/cpp-marks-average-calculator.git)
cd cpp-marks-average-calculator

```

### Option 2: Direct Download Links
* 📦 **[Download Full Source Code (.ZIP)](https://github.com/abnjawher25-art/cpp-marks-average-calculator/archive/refs/heads/main.zip)**
* 📄 **[View Raw main.cpp File](https://raw.githubusercontent.com/abnjawher25-art/cpp-marks-average-calculator/main/main.cpp)**

---

## 🏗️ Technical Architecture & Function Breakdown

The codebase strictly adheres to the **Single Responsibility Principle (SRP)** by dividing execution into atomic, re-usable processing units.

```
       +--------------------+
       |       main()       |
       +---------+----------+
                 |
        +--------+--------+------------------+
        |                 |                  |
        v                 v                  v
+---------------+ +---------------+ +------------------+
| readNumbers() | | GetAverage()  | |  printAverage()  |
+---------------+ +-------+-------+ +------------------+
                          |
                          v
                 +------------------+
                 | GetSumOfMarks()  |
                 +------------------+

```

| Function Name | Return Type | Memory Impact & Parameters | Description & Execution Logic |
| --- | --- | --- | --- |
| `readNumbers` | `void` | `float arr[3]` (Pass-by-pointer) | Iterates 3 times using a memory-optimized `short` index to read user inputs directly into array memory space. |
| `GetSumOfMarks` | `float` | `const float arr[3]` | Traverses the 3-element array, accumulating floating-point values into an accumulator variable `sum`. |
| `GetAverage` | `float` | `const float arr[3]` | Acts as an abstraction layer: retrieves the sum from `GetSumOfMarks()` and performs floating-point division by 3. |
| `printAverage` | `void` | `float average` (Pass-by-value) | Formats the calculated scalar result inside a multi-line ASCII structural frame. |

---

## 💡 Deep-Dive Technical Explanation (Engine Analysis)

### 1. Pass-by-Reference Decay of Fixed Arrays

In C++, passing array parameter dynamic shapes like `float arr[3]` to functions does **not** copy the entire array. Instead, the array decays into a primitive pointer pointing to its first memory element (`float*`).

* Any mutation performed inside `readNumbers()` (e.g., `arr[i] = enteredMark;`) directly manipulates the caller's stack memory inside `main()`.
* **Benefit:** Zero overhead in memory allocation and instantaneous data mutation without heavy copying.

### 2. Micro-Optimization: Primitive Type Selection

Notice the iterator declaration inside loops:

```cpp
for (short i = 0; i < 3; i++)

```

Instead of allocating standard 4-byte or 8-byte integers (`int` or `size_t`), the program explicitly utilizes a `short` integer (2 bytes). For fixed tiny bounds ($N=3$), this minimizes register pressure and keeps stack utilization at a strict minimum.

### 3. Precision Mechanics & Type-Casting Logic

In floating-point mathematical computations:

```cpp
float average = float(GetSumOfMarks(arr)) / 3;

```

* `GetSumOfMarks(arr)` returns a standard IEEE 754 floating-point scalar.
* The explicit conversion `float(...)` ensures safety, preventing precision loss or unwanted integer truncation during division by the literal dynamic constant `3`.

---

## 💻 Compilation & Runtime Instructions

### Prerequisites

* A C++11 (or higher) compatible compiler (`g++`, `clang++`, or MSVC `cl.exe`).

### Compilation Command (GCC)

```bash
g++ -O2 -Wall main.cpp -o MarksCalculator

```

*> Note: `-O2` enables compiler optimizations, while `-Wall` ensures strict standard compilation checks.*

### Execution Command

* **Linux / macOS:**
```bash
./MarksCalculator

```


* **Windows (CMD / PowerShell):**
```cmd
MarksCalculator.exe

```



---

## 🖥️ Live Output Demo

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

* **Modularity:** High cohesion, low coupling between business operations and UI output.
* **Readable Mechanics:** Self-documenting identifier names (`readNumbers`, `GetSumOfMarks`, `printAverage`).
* **Zero Dependencies:** Pure Standard Template Library (STL) runtime with zero third-party library bloat.

```

```
