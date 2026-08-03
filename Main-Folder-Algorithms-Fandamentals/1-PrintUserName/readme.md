📄 README.md
Markdown
# C++ Name Printer

A simple **C++** project demonstrating how to define and call a function to print a name to the console.

---

## 📌 Overview

This program serves as a basic educational example for C++ beginners. It aims to demonstrate:

* How to create and use user-defined functions.
* How to pass parameters to a function.
* How to use `cout` from the `<iostream>` library for console output.

---

## 💻 Source Code

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
🔍 Code Explanation
#include <iostream>: Includes the standard Input/Output stream library in C++.

using namespace std;: Allows usage of standard library components like cout and string without prefixing them with std::.

void printedName(string name):

A function that returns no value (void).

Accepts a string parameter named name.

Prints the text "the name: " followed by the passed name string.

main():

The primary entry point where execution begins.

Calls printedName("Ebrahim") passing "Ebrahim" as the argument.

Returns 0 to signal successful execution.

🛠️ How to Run
Requirements
A C++ compiler such as GCC / g++, Clang, or MSVC.

An IDE or code editor (e.g., VS Code, Code::Blocks, CLion).

Terminal / Command Line Instructions
Compile the code:

Bash
g++ -o name_printer main.cpp
Run the executable:

On Linux / macOS:

Bash
./name_printer
On Windows:

DOS
name_printer.exe
📊 Expected Output
Plaintext
the name: Ebrahim
📝 License
This project is open-source and available for educational and personal use.
