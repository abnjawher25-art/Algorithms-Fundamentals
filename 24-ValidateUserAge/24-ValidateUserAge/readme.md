```markdown
# 🆔 Age Validator Project

A mini-project demonstrating range validation logic using boolean functions, range boundaries, and ternary conditional operators in **C++**, built as part of fundamental algorithm and structured programming practices.

---

## 🎯 Learning Objectives

* 🔹 Writing **boolean returning functions (`bool`)** to encapsulate range checking (`min <= x <= max`).
* 🔹 Utilizing **ternary conditional operators (`? :`)** to select output streams concisely.
* 🔹 Composing functions directly to flow input data into validation and display routines.

---

## 💻 Source Code

```cpp
#include <iostream>
using namespace std;

// Function to read age from user
short readAge()
{
    // Variable to store age
    short Age;

    // Prompt user to enter age
    cout << "Enetr the age: ";
    cin >> Age;

    // Return the entered age
    return Age;

}

// Function to validate the entered number
bool ValidateEnteredNumber(short number, short from, short to)
{

    return (number >= from && number <= to);

}

// Function to print the result based on validation
void printResult(short Age)
{

    (ValidateEnteredNumber(Age, 18, 45)) ? cout << "\nvalidate age" : cout << "\ninvalid age";

}

// Main function
int main()
{
    // Call the readAge function and print the result
    printResult(readAge());

    // Return 0 to indicate successful executions
    return 0;
}

```

---

## 🖥 Expected Output

```text
Enetr the age: 25

validate age

```

---

## 👤 Author

* **Ebrahim Bn Jwher**
* **GitHub:** [@abnjawher25-art](https://www.google.com/search?q=https://github.com/abnjawher25-art)

```

```
