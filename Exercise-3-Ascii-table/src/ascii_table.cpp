#include <iostream>

using namespace std;

int main()
{
    // Let's get the ASCII table of all basic printable characters

    cout << endl;
    cout << "ASCII Basic Printable Characters" << endl;
    cout << endl;
    cout << "Decimal\t\tHexadecimal\tCharacter" << endl;
    cout << "-------\t\t-----------\t---------" << endl;

    for(unsigned int i = 33; i < 127; i++)
    {
        cout << dec << i;
        cout << "\t\t0x" << hex << i;
        cout << "\t\t" << static_cast<char>(i) << endl;
    }

    return 0;
}
