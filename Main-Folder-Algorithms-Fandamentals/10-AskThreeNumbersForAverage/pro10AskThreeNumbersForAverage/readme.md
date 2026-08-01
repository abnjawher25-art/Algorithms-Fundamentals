
Here is a professional, complete `README.md` file written in English, structured to highlight your code's features, logic, compilation instructions, and key C++ concepts used.

```markdown
# 📊 C++ Marks Average Calculator

A clean, modular C++ console application that prompts the user to enter three numerical marks, calculates their average, and displays the output inside a formatted terminal banner.

---

## 🚀 Key Features

* **Modular Design:** Divided into focused functions following the **Single Responsibility Principle (SRP)**.
* **Array passing & Processing:** Demonstrates passing arrays by reference to functions for data collection and processing.
* **Formatted Output:** Displays results inside an stylized ascii box for clean presentation.
* **Type-Safe Division:** Explicit casting ensures accurate floating-point arithmetic.

---

## 🛠️ Code Architecture Breakdown

The program breaks down the task into four dedicated functions:

| Function | Return Type | Description |
| :--- | :--- | :--- |
| `readNumbers(float arr[3])` | `void` | Interactively prompts the user 3 times and populates the array. |
| `GetSumOfMarks(float arr[3])` | `float` | Iterates through the array and calculates the total sum. |
| `GetAverage(float arr[3])` | `float` | Calls `GetSumOfMarks()` and calculates the average grade. |
| `printAverage(float average)` | `void` | Renders a styled UI border around the calculated result. |

---

## 💻 How to Compile and Run

### Prerequisites
* A C++ compiler supporting standard C++ (e.g., **GCC/G++**, **Clang**, or **MSVC**).

### Execution Steps

1. **Clone or save the code** into a file named `main.cpp`.
2. **Compile** using `g++` (or your preferred compiler):
   ```bash
   g++ -o MarksCalculator main.cpp

```

3. **Run** the compiled executable:
* **Linux / macOS:**
```bash
./MarksCalculator

```


* **Windows:**
```cmd
MarksCalculator.exe

```





---

## 📋 Example Console Output

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

## 🧠 Core C++ Concepts Highlighted

### 1. Function Decomposition

Instead of placing all logic in `main()`, the codebase isolates each step—**Input**, **Sum Calculation**, **Average Calculation**, and **Output Display**. This makes the code maintainable, testable, and scalable.

### 2. Passing Arrays to Functions

In C++, passing an array to a function `void readNumbers(float arr[3])` actually passes a pointer to its first element (`float*`). Modifications made inside `readNumbers` directly alter the `marks` array declared in `main()`.

### 3. Explicit Type Casting

In `GetAverage()`:

```cpp
float average = float(GetSumOfMarks(arr)) / 3;

```

Casting ensures that float division takes place rather than integer truncation.

---

> **Note on Syntax:** Ensure there are no non-breaking spaces (Unicode `U+00A0`) inside function bodies when pasting source code, as some compilers may flag them as invalid characters.

```

```
