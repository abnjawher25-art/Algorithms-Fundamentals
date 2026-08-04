```markdown
# 🔄 Swap Two Numbers Project

A mini-project demonstrating how to swap two variable values using a temporary buffer variable and array manipulation in **C++**, built as part of fundamental algorithm and structured programming practices.

---

## 🎯 Learning Objectives

* 🔹 Understanding the classic **temporary variable (swapping box) algorithm**.
* 🔹 Passing arrays to functions to mutate original elements in-place.
* 🔹 Formatting output states before and after data transformation.

---

## 💻 Source Code

```cpp
#include <iostream>
using namespace std;

// Read two numbers from the user
void readNumbers(short arr[2])
{
	for (int i = 0; i < 2; i++)
	{
		cout << "Enter number" << (i + 1) << ": ";
		cin >> arr[i];
	}
}

// Print the two numbers
void printArrayElements(short arr[2])
{
	cout << "the value of number1: " << arr[0] << endl;
	cout << "the value of number2: " << arr[1] << endl;
}

// Swap the two numbers
void swapNumbers(short arr[2])
{
	short swapingBox;
	swapingBox = arr[0];
	arr[0] = arr[1];
	arr[1] = swapingBox;

}

// Print the result of swapping
void printResultOfSwap(short arr[2])
{
	cout << "the value of number1: " << arr[0] << endl;
	cout << "the value of number2: " << arr[1] << endl;
}

// Main function
int main()
{
	// Declare an array to hold two numbers
	short numbers[2];

	// Read the numbers from the user
	readNumbers(numbers);

	// Print the numbers before swapping
	cout << "\n\nBefore Swapping" << endl;
	printArrayElements(numbers);

	// Swap the numbers
	swapNumbers(numbers);

	// Print the numbers after swapping
	cout << "\n\nAfter Swapping" << endl;
	printResultOfSwap(numbers);

	// Return 0 to indicate successful execution
	return 0;
}

```

---

## 🖥 Expected Output

```text
Enter number1: 10
Enter number2: 25


Before Swapping
the value of number1: 10
the value of number2: 25


After Swapping
the value of number1: 25
the value of number2: 10

```

---

## 👤 Author

* **Ebrahim Bn Jwher**
* **GitHub:** [@abnjawher25-art](https://www.google.com/search?q=https://github.com/abnjawher25-art)

```

```
