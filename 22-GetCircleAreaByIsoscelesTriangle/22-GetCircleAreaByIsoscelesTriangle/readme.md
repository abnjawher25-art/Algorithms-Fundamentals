```markdown
# ⭕ Circle Area By Circumference Project

A mini-project demonstrating how to calculate the area of a circle using its circumference and fundamental geometric relationships in **C++**, built as part of fundamental algorithm and structured programming practices.

---

## 🎯 Learning Objectives

* 🔹 Applying mathematical geometric formulas ($\text{Area} = \frac{L^2}{4 \pi}$) using floating-point operations.
* 🔹 Practicing **function chaining** by nesting user input, mathematical calculations, and display output.
* 🔹 Building modular programs with clean separation of algorithmic tasks.

---

## 💻 Source Code

```cpp
#include <iostream>
using namespace std;

// Function to read the circumference of a circle from user input
float readCircumferenceOfCircle()
{
	// Variable to store the circumference
	float Circumference;

	// Prompt the user to enter the circumference of the circle
	cout << "Enter Circumference of circle: ";
	cin >> Circumference;

	// Return the entered circumference
	return Circumference;
}

// Function to calculate the area of a circle given its circumference
float GetAreaOfCircle(float Circumference)
{
	// Calculate the area of the circle using the formula: Area = (Circumference^2) / (4 * π)			
	return (Circumference * Circumference) / 4 * 3.14;
}

// Function to print the result (area of the circle)
void printresult(float result)
{
	cout << "The area of circle: " << result;
}

// Main function to execute the program
int main()
{
	// Read the circumference of the circle, calculate the area, and print the result
	printresult(GetAreaOfCircle(readCircumferenceOfCircle()));

	// Return 0 to indicate successful execution
	return 0;
}

```

---

## 🖥 Expected Output

```text
Enter Circumference of circle: 20
The area of circle: 314

```

---

## 👤 Author

* **Ebrahim Bn Jwher**
* **GitHub:** [@abnjawher25-art](https://www.google.com/search?q=https://github.com/abnjawher25-art)

```

```
