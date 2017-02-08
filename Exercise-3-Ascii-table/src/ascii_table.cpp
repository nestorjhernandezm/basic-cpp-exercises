#include <iostream>

using namespace std;

int main()
{
    // Let's get the ASCII table of all printable characters

    cout << endl;
    cout << "ASCII Printable Characters" << endl;
    cout << endl;
    cout << "Decimal\t\tHexadecimal\tCharacter" << endl;
    cout << "-------\t\t-----------\t---------" << endl;

    for(int i = 33; i < 127; i++)
    {
        cout << i << "\t\t0x" << hex << i << "\t\t" << static_cast<char>(i) <<
            endl;
    }

    return 0;
}
