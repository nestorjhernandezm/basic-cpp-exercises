#include <iostream>

using namespace std;

int main()
{
    // 4.1) Get two integers "a" and "b" and a pointer for each of them.
    // Initialize the pointers and display the integers by dereferencing them.
    // Show the addresses as well.

    int a, b;

    cout << "Enter value of a: " << endl;
    cin >> a;

    cout << "Enter value of b: " << endl;
    cin >> b;

    int* ptr_a = &a;
    int* ptr_b = &b;

    cout << "Value of a: " << *ptr_a << " is in address: " << ptr_a << endl;
    cout << "Value of b: " << *ptr_b << " is in address: " << ptr_b << endl;

    return 0;
}
