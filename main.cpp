#include <iostream>
#include "src/Sphere/Sphere.h"

using namespace std;

/**
 * This function demonstrates the usage of pointers in C++.
 * It declares an integer variable 'a' and a pointer 'p' that points to the address of 'a'.
 * It then prints the address and value of 'a' and the address and value stored in 'p'.
 * The function also demonstrates how changes to the variable 'a' affect the value stored in 'p',
 * and how assigning a new value to the pointer 'p' affects the value of 'a'.
 */
void pointers() {
    int a = 10;
    int *p = &a; // Pointer points to the address of the variable

    cout << "Variable address: " << &a << endl
        << "Pointer address: " << p << endl
        << "Variable value: " << a << endl
        << "Pointer value: " << *p << endl;

    // Incrementing the variable
    a += 5;
    cout << "After variable increment: " << a << endl
        << "After variable increment: " << *p << endl;

    // Asigning a new value to the pointer
    *p = 8;
    cout << "After pointer asign: " << a << endl
        << "After pointer asign: " << *p << endl;
}



/**
 * This function demonstrates the usage of the 'foreach' loop in C++.
 * It declares an integer array 'arr' and iterates over each element using the 'foreach' loop.
 * The loop prints each element of the array.
 */
void foreach() {
    int arr[] = {1, 2, 3, 4, 5};
    
    for (int item : arr) {
        cout << item << endl;
    }
}



/**
 * This function demonstrates the usage of pointers with arrays in C++.
 * It declares a string array 'arr' and a pointer 'p' that points to the first element of the array.
 * It then prints the value of the first element using the pointer.
 * The function also demonstrates how to access other elements of the array using pointer arithmetic.
 */
void arrayPointers() {
    string arr[] = {"some", "text", "here"};

    string *p = arr; // Pointer points to the first element of the array

    cout << "Pointer to arr[0] value: " << *p << endl;
    p += 1;
    cout << "Pointer to arr[1] value: " << *p << endl;
    cout << "Pointer to arr[2] value: " << *(p+1) << endl;
}



/**
 * This function demonstrates the usage of dynamic memory allocation in C++.
 * It takes an integer input 'n' from the user and creates an integer array of size 'n' using dynamic memory allocation.
 * It then initializes the array with values from 1 to 'n' and prints the address of the second element of the array.
 */
void dynamicArray() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // We can use dynamic memory allocation
    int *arr = new int[n]; // int arr[n]; - This is not allowed in c/c++
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    cout << "Array address: " << arr[1] << endl;
}



int sum(int a, int b = 3) {
    return a + b;
}
string sum(string a, string b) {
    return a + b;
}
/**
 * This function demonstrates the concept of function overloading in C++.
 * It defines two functions with the same name 'sum' but different parameters.
 * The first 'sum' function takes two integer parameters and returns their sum.
 * The second 'sum' function takes two string parameters and returns their concatenation.
 * The function demonstrates how the correct function is called based on the parameters passed to it.
 */
void overloading() {
    cout << sum(3) << endl;
    cout << sum("one", "two") << endl;
}



/**
 * This class represents a rectangle with two sides 'a' and 'b'.
 * It has methods to calculate the area and perimeter of the rectangle.
 * The class also has getter and setter methods for the sides 'a' and 'b'.
 */
class Rectangle {
    private:
        int _a, _b;
    public:
        Rectangle(int a = 0, int b = 0) {
            _a = a;
            _b = b;
        }

        int area() {
            return _a * _b;
        }
        int perimeter() {
            return 2 * (_a + _b);
        }

        int getA() {
            return _a;
        }
        int getB() {
            return _b;
        }
        void setA(int a) {
            _a = a;
        }

        friend void changeA(Rectangle &a, int newA) {
            a._a = newA;
        }

        Rectangle operator+ (const Rectangle &r) {
            Rectangle res;
            res._a = _a + r._a;
            res._b = _b + r._b;
            return res;
        }

        ~Rectangle() {
            cout << "Rectangle destroyed" << endl;
        }
};
void classExample() {
    Rectangle r(5, 10);
    cout << "Area: " << r.area() << endl;
    cout << "Perimeter: " << r.perimeter() << endl;
    cout << "A: " << r.getA() << endl;
    cout << "B: " << r.getB() << endl;
    r.setA(30);
    cout << "B: " << r.getB() << endl;
    cout << "Area: " << r.area() << endl;

    Rectangle *r2 = &r;
    // r2->area()
    // selection operator when using pointers
    cout << "Area: " << r2->area() << endl;
}



/**
 * This function demonstrates the usage of a class imported from an external file.
 * It creates an instance of the 'Sphere' class and prints the radius, volume, and surface area of the sphere.
 */
void importedClassExample() {
    Sphere s(5);
    cout << "Radius: " << s.getRadius() << endl;
    cout << "Volume: " << s.getVolume() << endl;
    cout << "Surface Area: " << s.getSurfaceArea() << endl;
}



/**
 * This function demonstrates the usage of friend functions in C++.
 * It creates an instance of the 'Rectangle' class and calls a friend function 'changeA' to change the value of side 'a'.
 * The function then prints the new value of side 'a'.
 */
void friendExample() {
    Rectangle r(5, 10);

    cout << "A: " << r.getA() << endl;
    changeA(r, 20);
    cout << "A after friend func: " << r.getA() << endl;
}



/**
 * This function demonstrates the usage of operator overloading in C++.
 * It creates two instances of the 'Rectangle' class and adds them together using the '+' operator.
 * The function then prints the values of the resulting rectangle.
 */
void operatorOverloading() {
    Rectangle r1(5, 10);
    Rectangle r2(3, 7);

    Rectangle r3 = r1 + r2;

    cout << "A: " << r3.getA() << endl;
    cout << "B: " << r3.getB() << endl;
}


void program() {
    // pointers();
    // arrayPointers();
    // dynamicArray();
    // foreach();
    // overloading();
    // classExample();
    // importedClassExample();
    // friendExample();
    operatorOverloading();
}

int main() {
    cout << endl << "------------ PROGRAM START ------------" << endl << endl;
    
    program();

    cout << endl << "------------- PROGRAM END -------------" << endl;

    return 0;
}