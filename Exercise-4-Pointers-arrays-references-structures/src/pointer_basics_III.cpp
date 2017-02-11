#include <iostream>

using namespace std;

int main()
{
    // 4.3) Given the string "A string." Print on one line the letter on the
    // index 0 by indexing the string, the pointer default pointed value
    // and the letter t using the pointer. Update the pointer to pointer + 2.
    // Then, in another line, print the new pointed value and the letters r
    // and g of the string (using the pointer).

    // NOTE: This exercise though instructive, considers a deprecated feature
    // inherited from C

    char s[] = "A string.";
    char* p = s;  // A string literal is also a char* (in C, but deprecated)

    cout << "Letter at index 0: " << s[0] << ", Default pointed value: " <<
        *p << ", Letter at index 3: " << p[3] << endl;  // *(p + 3) also works
    p += 2;

    cout << "New pointed value: " << *p << ", Letters: " << p[2] << p[5] <<
        endl;  // *(p + 2) and *(p + 5) also work as well

    return 0;
}
