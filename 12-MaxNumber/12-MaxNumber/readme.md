```markdown
# 🔢 Max Number Finder Project

A mini-project demonstrating conditional evaluations, array manipulation, and ternary operators in **C++**, built as part of fundamental algorithm and structured programming practices.

---

## 🎯 Learning Objectives

* 🔹 Using **ternary operators (`? :`)** for concise conditional logic and comparisons.
* 🔹 Reading and storing numerical values using fixed-size arrays.
* 🔹 Handling edge cases such as equal inputs using modular helper functions.

---

## 💻 Source Code

```cpp
#include <iostream>
using namespace std;

// Function to read two numbers from the user
void readNumbers(short arr[2])
{
	for (short i = 0; i < 2; i++)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> arr[i];
	}
}

// Function to get the maximum number from the array
short GetMaxNumber(short arr[2])
{
	// Compare the two numbers and return the maximum or 0 if they are equal
	return (arr[0] > arr[1]) ? arr[0] : (arr[0] == arr[1]) ? 0 : arr[1];
}

// Function to print the maximum number or indicate if the numbers are equal
void printMaxNumber(short maxNumber)
{
	// Print the maximum number or indicate if the numbers are equal
	(maxNumber == 0) ? cout << "equal numbers" : cout << "the max number: " << maxNumber;
}

// Main function to execute the program
int main()
{
	// Declare an array to hold two numbers
	short numbers[2];

	// Read the numbers from the user
	readNumbers(numbers);

	// Get the maximum number and print it
	printMaxNumber(GetMaxNumber(numbers));

	// Return 0 to indicate successful execution
	return 0;
}

```

---

## 🖥 Expected Output

```text
Enter number 1: 15
Enter number 2: 42
the max number: 42

```

---

## 👤 Author

* **Ebrahim Bn Jwher**
* **GitHub:** [@abnjawher25-art](https://www.google.com/search?q=https://github.com/abnjawher25-art)

```

```
