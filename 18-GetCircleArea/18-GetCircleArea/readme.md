```markdown
# ⭕ Circle Area Calculator Project

A mini-project demonstrating circle area calculation, constant usage, and function composition in **C++**, built as part of fundamental algorithm and structured programming practices.

---

## 🎯 Learning Objectives

* 🔹 Applying the circle area formula ($\text{Area} = \pi \times r^2$) programmatically.
* 🔹 Practicing **function nesting and composition** by passing the return value of one function directly into another.
* 🔹 Building modular and clean code with separated input, math logic, and output operations.

---

## 💻 Source Code

```cpp
#include <iostream>
using namespace std;

// Function to read the radius of circle
float readRadius()
{
	// Variable to store the radius of circle
	float Radius;

	// Prompt the user to enter the radius of circle
	cout << "Enter the Radius of circle: ";
	cin >> Radius;

	// Return the radius of circle	
	return Radius;
}

// Function to calculate the area of circle
float GetAreaOfCircle(float Radius)
{
	return 3.14 * Radius * Radius;
}

// Function to print the area of circle
void printResult(float result)
{
	cout << "The area of circle: " << result;
}

//main function
int main()
{
	// Call the functions to read the radius, calculate the area, and print the result
	printResult(GetAreaOfCircle(readRadius()));

	// Return 0 to indicate successful execution
	return 0;
}

```

---

## 🖥 Expected Output

```text
Enter the Radius of circle: 5
The area of circle: 78.5

```

---

## 👤 Author

* **Ebrahim Bn Jwher**
* **GitHub:** [@abnjawher25-art](https://www.google.com/search?q=https://github.com/abnjawher25-art)

```

```
