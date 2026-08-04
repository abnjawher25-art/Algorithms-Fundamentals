```markdown
# 📊 Average Calculator Project

A mini-project demonstrating how to read inputs, store values in arrays, and perform mathematical calculations using modular **functions** in **C++**, built as part of fundamental algorithm and structured programming practices.

---

## 🎯 Learning Objectives

* 🔹 Understanding how to pass and manipulate **fixed-size arrays** in functions.
* 🔹 Implementing **modular programming** by separating input, summation, average calculation, and output logic.
* 🔹 Applying **type casting** and basic arithmetic operations for data processing.

---

## 💻 Source Code

```cpp
#include <iostream>
using namespace std;

// This program will ask the user to enter three numbers and then calculate the average of those numbers.
void readNumbers(float arr[3])
{
	// This function will read three numbers from the user and store them in the array arr.
	float enteredMark;

	// Loop to read three numbers from the user
	for (short i = 0; i < 3; i++) {

		// Prompt the user to enter a number
		cout << "Enter the Mark(" << i + 1 << "): ";
		cin >> enteredMark;

		// Store the entered number in the array
		arr[i] = enteredMark;
	}
}

// This function will calculate the sum of the numbers in the array arr.		
float GetSumOfMarks(float arr[3])
{
	// This function will calculate the sum of the numbers in the array arr.
	float sum = 0;

	for (short i = 0; i < 3; i++) {
		sum += arr[i];
	}

	// Return the sum of the numbers in the array
	return sum;
}

// This function will calculate the average of the numbers in the array arr.
float GetAverage(float arr[3])
{
	// This function will calculate the average of the numbers in the array arr.
	float average = float(GetSumOfMarks(arr)) / 3;

	// Return the average of the numbers in the array
	return average;
}

// This function will print the average of the numbers in the array arr.
void printAverage(float average)
{
	cout << "|_________________________|\n";
	cout << "|_-_-_-_-_-_-_-_-_-_-_-_-_|\n";
	cout << "|-------------------------|\n";
	cout << "| The average: " << average << endl;
	cout << "|-------------------------|\n";
	cout << "|_-_-_-_-_-_-_-_-_-_-_-_-_|\n";
	cout << "|-------------------------|\n";
}

// The main function will call the readNumbers, GetAverage, and printAverage functions to read three numbers from the user, calculate the average of those numbers, and print the average.
int main()
{
	// Declare an array to hold the three numbers entered by the user
	float marks[3];

	// Call the readNumbers function to read three numbers from the user and store them in the marks array
	readNumbers(marks);

	// Call the GetAverage function to calculate the average of the numbers in the marks array and store the result in the average variable
	printAverage(GetAverage(marks));

	// Return 0 to indicate that the program has completed successfully
	return 0;
}

```

---

## 🖥 Expected Output

```text
Enter the Mark(1): 85
Enter the Mark(2): 90
Enter the Mark(3): 95
|_________________________|
|_-_-_-_-_-_-_-_-_-_-_-_-_|
|-------------------------|
| The average: 90
|-------------------------|
|_-_-_-_-_-_-_-_-_-_-_-_-_|
|-------------------------|

```

---

## 👤 Author

* **Ebrahim Bn Jwher**
* **GitHub:** [@abnjawher25-art](https://www.google.com/search?q=https://github.com/abnjawher25-art)

```

```
