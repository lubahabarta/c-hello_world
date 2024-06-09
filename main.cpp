#include <iostream>
#include "src/Sphere/Sphere.h"

using namespace std;

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



void foreach() {
    int arr[] = {1, 2, 3, 4, 5};
    
    for (int item : arr) {
        cout << item << endl;
    }
}



void arrayPointers() {
    string arr[] = {"some", "text", "here"};

    string *p = arr; // Pointer points to the first element of the array

    cout << "Pointer to arr[0] value: " << *p << endl;
    p += 1;
    cout << "Pointer to arr[1] value: " << *p << endl;
    cout << "Pointer to arr[2] value: " << *(p+1) << endl;
}



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
void overloading() {
    cout << sum(3) << endl;
    cout << sum("one", "two") << endl;
}



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



void importedClassExample() {
    Sphere s(5);
    cout << "Radius: " << s.getRadius() << endl;
    cout << "Volume: " << s.getVolume() << endl;
    cout << "Surface Area: " << s.getSurfaceArea() << endl;
}



void friendExample() {
    Rectangle r(5, 10);

    cout << "A: " << r.getA() << endl;
    changeA(r, 20);
    cout << "A after friend func: " << r.getA() << endl;
}



void operatorOverloading() {
    Rectangle r1(5, 10);
    Rectangle r2(3, 7);

    Rectangle r3 = r1 + r2;

    cout << "A: " << r3.getA() << endl;
    cout << "B: " << r3.getB() << endl;
}



class Square {
    private:
        const int _a, _b;
    public:
        Square(int a, int b) : _a(a), _b(b) {}

        int getA() const { return _a; }
        int getB() const { return _a; }
        int getArea() const { return _a * _b; }
        
        void draw() const {
            cout << "Drawing square" << endl;
        }
};
/*
    ACCESS SPECIFIERS
    KEYWORD     BASE                    DERIVED
    public      public, ...             protected, ...
    protected   private, protected      protected
    private     private, protected      private      
*/
class Cube : public Square {
    private:
        const int _c;
    public:
        Cube(int a, int b, int c) : Square(a, b), _c(c) {}

        int getC() const { return _c; }
        int getVolume() const { return getA() * getB() * _c; }

        void draw() const {
            cout << "Drawing cube" << endl;
        }
};
void inheritance() {
    Cube c(5, 5, 5);
    cout << "Volume: " << c.getVolume() << endl;
    c.draw();
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
    // operatorOverloading();
    inheritance();
}

int main() {
    cout << endl << "------------ PROGRAM START ------------" << endl << endl;
    
    program();

    cout << endl << "------------- PROGRAM END -------------" << endl;

    return 0;
}