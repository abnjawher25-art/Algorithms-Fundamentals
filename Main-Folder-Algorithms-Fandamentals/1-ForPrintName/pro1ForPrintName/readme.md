# C++ Name Printer Program

A simple **C++** program demonstrating how to define and invoke custom functions to display a string on the console.

---

## 📝 Overview

This repository contains a basic C++ script that:
1. Defines a void function `printedName` that accepts a `string` parameter.
2. Prints the provided name formatted with the prefix `"the name: "`.
3. Calls `printedName` inside the `main()` function, passing `"Ebrahim"` as the argument.

---

## ⚙️ Source Code

```cpp
#include <iostream>
using namespace std;

// function to print the name
void printedName(string name)
{
    cout << "the name: " << name;
}

// main function
int main()
{
    printedName("Ebrahim");

    // complete execution
    return 0;
}

```

---

## 🖥️ Output

When compiled and executed, the program generates the following console output:

```text
the name: Ebrahim

```

---

## 🛠️ Requirements

* Any standard C++ compiler (e.g., `g++`, Clang, or MSVC).
* C++11 standard support or higher.

# 📌 Download & Usage Links

This section provides various links to download the entire repository or directly access the specified folder.



