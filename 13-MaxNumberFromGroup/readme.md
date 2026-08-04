```markdown
# 🏆 Max Of Three Numbers Project

A mini-project demonstrating how to find the largest value among three user inputs using sequential conditional statements and array traversal in **C++**, built as part of fundamental algorithm and structured programming practices.

---

## 🎯 Learning Objectives

* 🔹 Implementing sequential comparison logic to find maximum values.
* 🔹 Iterating over fixed-size arrays for user data entry.
* 🔹 Structuring modular code separating input, processing logic, and output display.

---

## 💻 Source Code

```cpp
#include <iostream>
using namespace std;

// Function to read three numbers from the user
void readNumbers(short arr[3])
{
    for (short i = 0; i < 3; i++)
    {
        cout << "Enter the number (" << i + 1 << "): ";
        cin >> arr[i];
    }
}

// Function to find the maximum number among three numbers
short GetMaxNumber(short arr[3]) {
    short max = arr[0];

    if (arr[1] > max)
        max = arr[1];
    if (arr[2] > max)
        max = arr[2];

    return max;
}

// Function to print the maximum number
void printMaxNumber(short maxNumber)
{
    cout << "\n\nThe max number is: " << maxNumber << endl;
}

// Main function
int main()
{
    // Declare an array to hold three numbers
    short numbers[3];

    // Read three numbers from the user
    readNumbers(numbers);

    // Find the maximum number among the three numbers
    printMaxNumber(GetMaxNumber(numbers));

    // Return 0 to indicate successful execution
    return 0;
}

```

---

## 🖥 Expected Output

```text
Enter the number (1): 12
Enter the number (2): 89
Enter the number (3): 45


The max number is: 89

```

---

## 👤 Author

* **Ebrahim Bn Jwher**
* **GitHub:** [@abnjawher25-art](https://www.google.com/search?q=https://github.com/abnjawher25-art)

```

```
