```markdown
# ⭕ Circle Inscribed In Square Area Calculator Project

A mini-project demonstrating how to calculate the area of a circle inscribed in a square using geometry formulas and modular functions in **C++**, built as part of fundamental algorithm and structured programming practices.

---

## 🎯 Learning Objectives

* 🔹 Applying geometric formulas ($\text{Area} = \frac{\pi \times a^2}{4}$) for circles inscribed within squares.
* 🔹 Practicing **function nesting and chaining** to handle input, calculation, and display in a streamlined flow.
* 🔹 Writing clean, well-commented C++ code following modular programming principles.

---

## 💻 Source Code

```cpp
#include <iostream>
using namespace std;

// This program calculates the area of a circle inscribed in a square. The user is prompted to enter the side length of the square, and the program calculates and displays the area of the inscribed circle.
float readSquareSide()
{
    // This function prompts the user to enter the side length of the square and returns the value as a float.
    float squareSide;

    // Prompt the user to enter the side length of the square
    cout << "Enter the sqare side: ";
    cin >> squareSide;

    // Return the entered value
    return squareSide;
}

// This function calculates the area of a circle inscribed in a square given the side length of the square. The area is calculated using the formula: Area = (π * r^2), where r is half the side length of the square.
float GetArea(float squareSide)
{
    // Calculate the area of the inscribed circle using the formula: Area = (π * r^2), where r is half the side length of the square.
    return (3.14 * squareSide * squareSide) / 4;
}

// This function prints the result of the area calculation to the console.
void printResult(float result)
{
    cout << "The area of circle: " << result;
}

// The main function orchestrates the flow of the program by calling the necessary functions to read input, calculate the area, and print the result.
int main()
{
    // Call the readSquareSide function to get the side length of the square, then pass it to GetArea to calculate the area of the inscribed circle, and finally print the result using printResult.
    printResult(GetArea(readSquareSide()));

    // Return 0 to indicate successful execution of the program.
    return 0;
}

```

---

## 🖥 Expected Output

```text
Enter the sqare side: 10
The area of circle: 78.5

```

---

## 👤 Author

* **Ebrahim Bn Jwher**
* **GitHub:** [@abnjawher25-art](https://www.google.com/search?q=https://github.com/abnjawher25-art)

```

```
