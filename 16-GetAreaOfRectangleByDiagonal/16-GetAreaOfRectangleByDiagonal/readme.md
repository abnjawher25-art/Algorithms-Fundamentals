```markdown
# 📐 Rectangle Area By Side And Diagonal Project

A mini-project demonstrating how to calculate a rectangle's area using a known side and its diagonal via the **Pythagorean Theorem** and math functions in **C++**, built as part of fundamental algorithm and structured programming practices.

---

## 🎯 Learning Objectives

* 🔹 Using mathematical functions (`sqrt()` and `pow()`) from the `<cmath>` library.
* 🔹 Applying geometric principles ($\text{Area} = a \times \sqrt{d^2 - a^2}$) programmatically.
* 🔹 Utilizing **pass-by-reference (`&`)** for multi-variable user inputs.

---

## 💻 Source Code

```cpp
#include <iostream>
#include <cmath>
using namespace std;

//function to read the values of side and diagonal
void readValues(float& side, float& Diagonal)
{
    cout << "Enter the value of any known side: ";
    cin >> side;
    cout << "Enter the value of Diagonal: ";
    cin >> Diagonal;
}

//function to calculate the area of rectangle
float GetAreaOfRectangle(float side, float Diagonal)
{
    return side * (sqrt(pow(Diagonal, 2) - pow(side, 2)));
}

//function to print the area of rectangle
void printAreaOfRectangle(float Area)
{
    cout << "\n\nArea of rectangle: " << Area;

}

//main function
int main()
{
    //declare variables
    float side, Diagonal;

    //invoke the functions
    readValues(side, Diagonal);

    //invoke the function to calculate the area of rectangle and print the area of rectangle
    printAreaOfRectangle(GetAreaOfRectangle(side, Diagonal));

    //return 0 to indicate successful execution
    return 0;
}

```

---

## 🖥 Expected Output

```text
Enter the value of any known side: 5
Enter the value of Diagonal: 13


Area of rectangle: 60

```

---

## 👤 Author

* **Ebrahim Bn Jwher**
* **GitHub:** [@abnjawher25-art](https://www.google.com/search?q=https://github.com/abnjawher25-art)

```

```
