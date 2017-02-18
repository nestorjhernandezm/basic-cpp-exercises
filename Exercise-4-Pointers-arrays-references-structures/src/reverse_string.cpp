#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string reverse_string(string s)
{
    int size = s.size();

    string r(size, ' ');

    for(int i = 0; i < size; i++)
    {
        r[i] = s[(size - 1) - i];
    }

    return r;
}

int main()
{
    // 4.4) Revert the string "A string" using two methods: One based in
    // string class and another based in std::reverse from <algorithm>.

    // Using string class
    string str = "A string";
    cout << "Input string is: " << str << endl;
    cout << "Reversed with string class: " << reverse_string(str) << endl;

    // C++11 using the reverse algorithm
    reverse(str.begin(), str.end());
    cout << "Reversed with C++11: " << str << endl;

    return 0;
}
