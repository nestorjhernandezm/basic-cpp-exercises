#include <iostream>

using namespace std;

int main()
{
    // 4.3) Given the string "A string." Print on one line the letter on the
    // index 0 (A), the pointer position and the letter at index 3 (t). Undate
    // the pointer to pointer + 2. Then, in another line, print the pointer
    // and the letters r and g of the string (using the pointer). Start with
    // string literals and then string class

    char s[] = "A string.";
    char* p = s;

    cout << "Letter at index 0: " << *p << ". Pointer position: " <<
        &p << ". Letter at index 3: " << *(p + 3) << endl;

    p += 2;

    cout << "Pointer position: " << &p << " " << *(p + 2) << *(p + 5) << endl;

    return 0;
}
