```markdown
# 📐 Rectangle Area Calculator Project

A mini-project demonstrating pass-by-reference mechanisms, basic geometric calculations, and modular function design in **C++**, built as part of fundamental algorithm and structured programming practices.

---

## 🎯 Learning Objectives

* 🔹 Passing variables **by reference (`&`)** to allow functions to modify caller arguments directly.
* 🔹 Applying basic geometric formulas (`Area = Length × Width`).
* 🔹 Formatting standard input/output using `<iomanip>` and stream formatting.

---

## 💻 Source Code

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

//function to read length and width of rectangle
void readLengthAndWidith(float& Length, float& Width)
{
    cout << "Enter the length of rectangle: ";
    cin >> Length;
    cout << "Enter the width of rectangle: ";
    cin >> Width;
}

//function to calculate area of rectangle
float areaOfRectangle(float& Length, float& Width)
{
    return Length * Width;
}

//function to print area of rectangle
void printAreaOfRectangle(float Area)
{
    cout << "\n\nthe area of rectangle: " << Area;
}

//main function
int main()
{
    //declare variables
    float Length, Width;

    //call function to read length and width of rectangle
    readLengthAndWidith(Length, Width);

    //call function to calculate area of rectangle and print area of rectangle
    printAreaOfRectangle(areaOfRectangle(Length, Width));

    //return 0 to indicate successful execution
    return 0;
}

```

---

## 🖥 Expected Output

```text
Enter the length of rectangle: 12.5
Enter the width of rectangle: 4


the area of rectangle: 50

```

---

## 👤 Author

* **Ebrahim Bn Jwher**
* **GitHub:** [@abnjawher25-art](https://www.google.com/search?q=https://github.com/abnjawher25-art)

```

```
