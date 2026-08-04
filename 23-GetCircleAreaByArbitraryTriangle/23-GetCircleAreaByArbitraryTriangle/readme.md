```markdown
# ⭕ Circle Along Triangle Area Project

A mini-project demonstrating how to calculate the area of a circle described around an arbitrary triangle using **Heron's Formula** and advanced geometric relations in **C++**, built as part of fundamental algorithm and structured programming practices.

---

## 🎯 Learning Objectives

* 🔹 Applying **Heron's Formula** and geometric circle-triangle radius relations programmatically.
* 🔹 Utilizing mathematical operations (`sqrt()`) from the `<cmath>` library alongside high-precision constants.
* 🔹 Practicing **pass-by-reference (`&`)** for efficient multi-parameter passing across modular functions.

---

## 💻 Source Code

```cpp
#include <iostream>
#include <cmath>
using namespace std;

// Function to read values from the user
void readValues(float& longRibOfTriangle, float& otherRibOfTriangle, float& triangleBasic)
{
	// Prompt the user for input
	cout << "Enter the long Rib Of Triangle: ";
	cin >> longRibOfTriangle;

	// Prompt the user for input
	cout << "Enter the other Rib Of Triangle: ";
	cin >> otherRibOfTriangle;

	// Prompt the user for input
	cout << "Enter the triangle Basic: ";
	cin >> triangleBasic;
}

// Function to calculate the area of a circle based on the triangle's sides
float GetArae(float& longRibOfTriangle, float& otherRibOfTriangle, float& triangleBasic)
{
	// Define the value of pi
	const float pi = 3.141592653589;

	// Calculate the semi-perimeter of the triangle
	float role = (longRibOfTriangle + otherRibOfTriangle + triangleBasic) / 2;

	// Calculate and return the area of the circle using the formula derived from Heron's formula
	return (pi * ((longRibOfTriangle * otherRibOfTriangle * triangleBasic) / 4 * sqrt(role * (role - longRibOfTriangle) * (role - triangleBasic) * (role - otherRibOfTriangle))));
}

// Function to print the result
void printResult(float result)
{

	cout << "\n\nThe arae of circle: " << result;

}

// Main function
int main()
{
	// Declare variables to hold the triangle's sides
	float longRibOfTriangle, otherRibOfTriangle, triangleBasic;

	// Read values from the user
	readValues(longRibOfTriangle, otherRibOfTriangle, triangleBasic);

	// Calculate and print the area of the circle
	printResult(GetArae(longRibOfTriangle, otherRibOfTriangle, triangleBasic));

	// Return 0 to indicate successful execution
	return 0;
}

```

---

## 🖥 Expected Output

```text
Enter the long Rib Of Triangle: 5
Enter the other Rib Of Triangle: 6
Enter the triangle Basic: 7


The arae of circle: 271.806

```

---

## 👤 Author

* **Ebrahim Bn Jwher**
* **GitHub:** [@abnjawher25-art](https://www.google.com/search?q=https://github.com/abnjawher25-art)

```

```
