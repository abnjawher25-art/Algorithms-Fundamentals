<p align="center">
  <a href="#-english-version">
    <img src="https://img.shields.io/badge/Language-English-blue?style=for-the-badge" alt="English">
  </a>
  <a href="#-النسخة-العربية">
    <img src="https://img.shields.io/badge/اللغة-العربية-green?style=for-the-badge" alt="Arabic">
  </a>
</p>

# Average Calculator (C++)                                                                              

A simple C++ console application that prompts the user to enter three numerical marks, calculates their sum and average, and displays the result in a styled console format.

---
## 🇬🇧 English Version
## 📌 Features

* **Float Precision:** Supports decimal numbers (`float`).
* **Modular Code Structure:** Organized into clear, single-responsibility functions:
  * `readNumbers`: Handles user input and stores values in an array.
  * `GetSumOfMarks`: Calculates the total sum of the numbers.
  * `GetAverage`: Computes the arithmetic mean.
  * `printAverage`: Displays the calculated average with custom ascii borders.

---

## 🛠️ Source Code

```cpp
#include <iostream>
using namespace std;

// Read three numbers from the user and store them in the array
void readNumbers(float arr[3])
{
	float enteredMark;

	for (short i = 0; i < 3; i++) {
		cout << "Enter the Mark(" << i + 1 << "): ";
		cin >> enteredMark;
		arr[i] = enteredMark;
	}
}

// Calculate the sum of the numbers in the array
float GetSumOfMarks(float arr[3])
{
	float sum = 0;

	for (short i = 0; i < 3; i++) {
		sum += arr[i];
	}

	return sum;
}

// Calculate the average of the numbers in the array
float GetAverage(float arr[3])
{  
	float average = float(GetSumOfMarks(arr)) / 3;
	return average;
}

// Print the average inside a formatted box
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

## 🚀 How to Run

### 1. Prerequisites
Make sure you have a C++ compiler installed (e.g., `g++` via MinGW/GCC) or an IDE like Visual Studio, Code::Blocks, or CLion.

### 2. Compilation and Execution (Terminal / Command Prompt)

```bash
# Compile the code
g++ main.cpp -o AverageCalculator

# Run the executable
./AverageCalculator
```

---

## 💻 Sample Output

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


# Average Calculator (حاسبة المتوسط الحسابي)                                                                       

برنامج بسيط مكتوب بلغة **C++** يطلب من المستخدم إدخال ثلاثة درجات/أرقام، ثم يقوم بحساب المجموع والمتوسط الحسابي لها وطباعة النتيجة بشكل منسق.

---
## 🇸🇦 النسخة العربية
## 📌 الميزات (Features)

* **إدخال أرقام مرن:** قبول الأعداد العشرية (Floating-point numbers).
* **تقسيم الكود (Modular Code):** كتابة الكود عبر دالّات منفصلة ومُنظمة لتسهيل القراءة والقابلية لإعادة الاستخدام:
  * `readNumbers`: لإدخال البيانات.
  * `GetSumOfMarks`: لحساب المجموع.
  * `GetAverage`: لحساب المتوسط الحسابي.
  * `printAverage`: لطباعة النتيجة بتنسيق جميل.

---

## 🛠️ الكود البرمجي (Source Code)

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

// The main function will call the readNumbers, GetAverage, and printAverage functions
int main()
{
	// Declare an array to hold the three numbers entered by the user
	float marks[3];

	// Call the readNumbers function
	readNumbers(marks);

	// Call the GetAverage and printAverage functions
	printAverage(GetAverage(marks));

	return 0;
}
```

---

## 🚀 طريقة التشغيل (How to Run)

### 1. المتطلبات (Prerequisites)
تأكد من وجود مترجم لغة C++ على جهازك (مثل `g++` أو استخدام بيئة تطوير مثل Visual Studio / Code::Blocks).

### 2. التجميع والتشغيل عبر السطر البرمجي (Terminal / Command Prompt)

```bash
# 1. تجميع الكود
g++ main.cpp -o AverageCalculator

# 2. تشغيل البرنامج
./AverageCalculator
```

---

## 💻 مثال على المخرجات (Example Output)

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
