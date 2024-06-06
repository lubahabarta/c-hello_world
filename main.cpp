#include <iostream>

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

void program() {
    // pointers();
    // arrayPointers();
    // dynamicArray();
    // foreach();
    overloading();
}

int main() {
    cout << endl << "------------ PROGRAM START ------------" << endl << endl;
    
    program();

    cout << endl << "------------- PROGRAM END -------------" << endl;

    return 0;
}