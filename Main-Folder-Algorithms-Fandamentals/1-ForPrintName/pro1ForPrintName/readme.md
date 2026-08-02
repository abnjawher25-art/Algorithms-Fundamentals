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

---

## 📥 1. Download Full Repository

You can download the entire repository containing all folders and code in different formats:

- 📦 [Download as ZIP](https://github.com/abnjawher25-art/Main-Folder-Algorithms-Fandamentals/archive/refs/heads/main.zip)
- 🗜️ [Download as TAR.GZ](https://github.com/abnjawher25-art/Main-Folder-Algorithms-Fandamentals/archive/refs/heads/main.tar.gz)

---

## 📂 2. Access Project (pro1ForPrintName)

- 🔗 [Browse Folder on GitHub](https://github.com/abnjawher25-art/Main-Folder-Algorithms-Fandamentals/tree/main/1-ForPrintName/pro1ForPrintName)
- 📄 [View Raw Source Code (main.cpp)](https://raw.githubusercontent.com/abnjawher25-art/Main-Folder-Algorithms-Fandamentals/main/1-ForPrintName/pro1ForPrintName/main.cpp)

---

## 🛠️ 3. Download Subfolder Only

### ⚡ Method 1: Via DownGit (Direct Browser Download)
Click the link below to download only the `pro1ForPrintName` folder as a ZIP file without downloading the entire repository:
👉 [Download Folder via DownGit](https://minhaskamal.github.io/DownGit/#/home?url=https://github.com/abnjawher25-art/Main-Folder-Algorithms-Fandamentals/tree/main/1-ForPrintName/pro1ForPrintName)

### 💻 Method 2: Via Git Sparse-Checkout (Command Line)
If you want to clone only this specific folder to your local machine using Git:

```bash
git clone --no-checkout [https://github.com/abnjawher25-art/Main-Folder-Algorithms-Fandamentals.git](https://github.com/abnjawher25-art/Main-Folder-Algorithms-Fandamentals.git)
cd Main-Folder-Algorithms-Fandamentals
git sparse-checkout set 1-ForPrintName/pro1ForPrintName
git checkout
