Here is a complete `README.md` file designed for your C++ Average Calculator project.

```markdown
# Student Marks Average Calculator

A lightweight C++ console application that prompts the user to enter three numerical marks, computes their total sum and average, and displays the final result in a formatted box.

---

## Prerequisites & Requirements

To compile and run this program, you will need:

* **Compiler:** Any C++ compiler supporting C++11 or higher (e.g., `g++`, `clang++`, or MSVC).
* **IDE / Terminal:** VS Code, Visual Studio, CLion, or any terminal environment.
* **Operating System:** Windows, macOS, or Linux.

---

## Program Flow Diagram


```

+------------------+
|    main()        |
+--------+---------+
|
v
+------------------+      Prompts user for 3 marks
|  readNumbers()   | ---> Stores values into marks[3] array
+--------+---------+
|
v
+------------------+      Calls GetSumOfMarks() internally
|   GetAverage()   | ---> Sums all 3 array elements
+--------+---------+      Calculates average: sum / 3.0
|
v
+------------------+
|  printAverage()  | ---> Outputs styled average box
+------------------+

```

---

## Source Code

```cpp
#include <iostream>
using namespace std;

// Read three numbers from the user and store them in the array arr.
void readNumbers(float arr[3])
{
	float enteredMark;

	for (short i = 0; i < 3; i++) {
		cout << "Enter the Mark(" << i + 1 << "): ";
		cin >> enteredMark;
		arr[i] = enteredMark;
	}
}

// Calculate the sum of the numbers in the array arr.
float GetSumOfMarks(float arr[3])
{
	float sum = 0;

	for (short i = 0; i < 3; i++) {
		sum += arr[i];
	}

	return sum;
}

// Calculate the average of the numbers in the array arr.
float GetAverage(float arr[3])
{
	float average = float(GetSumOfMarks(arr)) / 3;
	return average;
}

// Print the average inside a formatted box.
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

int main()
{
	float marks[3];

	readNumbers(marks);
	printAverage(GetAverage(marks));

	return 0;
}

```

---

## Expected Output

### Sample Run

```text
Enter the Mark(1): 85.5
Enter the Mark(2): 90
Enter the Mark(3): 78.5
|_________________________|
|_-_-_-_-_-_-_-_-_-_-_-_-_|
|-------------------------|
| The average: 84.6667
|-------------------------|
|_-_-_-_-_-_-_-_-_-_-_-_-_|
|-------------------------|

```

---

## How to Build and Run

1. **Clone or save the file:**
Save the source code as `main.cpp`.
2. **Compile using GCC:**
```bash
g++ -o avg_calculator main.cpp

```


3. **Run the executable:**
* **Linux/macOS:** `./avg_calculator`
* **Windows:** `avg_calculator.exe`



```

```
