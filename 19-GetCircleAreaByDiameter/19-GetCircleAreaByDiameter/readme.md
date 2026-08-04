```markdown
# ⭕ Circle Area By Diameter Project

A mini-project demonstrating how to calculate a circle's area directly from its diameter using basic geometric formulas and function composition in **C++**, built as part of fundamental algorithm and structured programming practices.

---

## 🎯 Learning Objectives

* 🔹 Applying the diameter-based circle area formula ($\text{Area} = \frac{\pi \times d^2}{4}$) programmatically.
* 🔹 Practicing **function chaining** by passing return values directly between functions.
* 🔹 Designing concise and modular functional code for arithmetic operations.

---

## 💻 Source Code

```cpp
#include <iostream>
using namespace std;

// Function to read the diameter of the circle from user input
float readDiameter()
{
    // Variable to store the diameter
    float Diameter;

    // Prompt the user to enter the diameter
    cout << "Enter the value of Diameter: ";
    cin >> Diameter;

    // Return the entered diameter
    return Diameter;
}

// Function to calculate the area of a circle given its diameter
float GetAreaOfCircle(float Diameter)
{
    // Calculate the area using the formula: Area = π * (Diameter / 2)^2
    return (3.14 * Diameter * Diameter) / 4;
}

// Function to print the result (area of the circle)
void printResult(float result)
{
    cout << "The area of circle: " << result;
}

// Main function to execute the program
int main()
{
    // Call the functions to read the diameter, calculate the area, and print the result
    printResult(GetAreaOfCircle(readDiameter()));

    // Return 0 to indicate successful execution
    return 0;
}

```

---

## 🖥 Expected Output

```text
Enter the value of Diameter: 10
The area of circle: 78.5

```

---

## 👤 Author

* **Ebrahim Bn Jwher**
* **GitHub:** [@abnjawher25-art](https://www.google.com/search?q=https://github.com/abnjawher25-art)

```

```
