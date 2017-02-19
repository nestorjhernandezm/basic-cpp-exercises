#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string reverse_string(string s)
{
    unsigned int size = s.size();

    string r(size, ' ');

    for(unsigned int i = 0; i < size; ++i)
    {
        r[i] = s[(size - 1) - i];
    }

    return r;
}

void remove_duplicates(string& s)
{
    unsigned int size = s.size();

    for(unsigned i = 0; i < size; ++i)
    {
        for(unsigned j = i + 1; j < size; ++j)
        {
            if(s[i] == s[j])
            {
                s[j] = '0';
            }
        }
    }

    s.erase(remove(s.begin(), s.end(), '0'), s.end());
    // Remove returns an iterator that follows the last element not removed
    // Then, that iterator is utilized to erase from it until the end.
}

void test_remove_duplicates(string& s)
{
    cout << "String with duplicates: " << s << endl;
    remove_duplicates(s);
    cout << "String without duplicates: " << s << endl;
}

int main()
{
    // 4.4) a) Revert the string "A string" using two methods: One based in
    // string class and another based in std::reverse from <algorithm>.
    // b) Remove duplicates in a string. Test your code with various cases.

    // Using string class
    string str = "A string";
    cout << "Input string is: " << str << endl;
    cout << "Reversed with string class: " << reverse_string(str) << endl;

    // C++11 using the reverse algorithm
    reverse(str.begin(), str.end());
    cout << "Reversed with C++11: " << str << endl;


    vector<string> strings;
    strings.push_back("ttvvvxy");
    strings.push_back("xxxxxxx");
    strings.push_back("aabbbcc");
    strings.push_back("abababa");
    strings.push_back("abcdefg");

    for (unsigned int i = 0; i < strings.size(); ++i)
    {
        test_remove_duplicates(strings[i]);
    }

    return 0;
}
