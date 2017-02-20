#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <locale>

using namespace std;

locale loc;

void to_lowercase(string& s)
{
    unsigned int size = s.size();

    for(unsigned int i = 0; i < size; ++i)
    {
        s[i] = tolower(s[i], loc);
    }
}

bool is_anagram(string s1, string s2)
{
    to_lowercase(s1);
    to_lowercase(s2);

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    // Remove spaces
    s1.erase(remove(s1.begin(), s1.end(), ' '), s1.end());
    s2.erase(remove(s2.begin(), s2.end(), ' '), s2.end());

    return static_cast<bool>(s1 == s2);
}

int main()
{
    // 5.2) Verify if two strings are anagrams. They are anagrams if their
    // ordered letters, excluding spaces, are the same.

    // Using string class
    string s1 = "William Shakespeare";
    string s2 = "I am a weakish speller";

    const bool are_anagrams = is_anagram(s1, s2);

    cout << "Is the string \"" << s1 << "\" and anagram of \"" << s2 <<
        "\"? (1: True, 0: False)" << endl;
    cout << are_anagrams  << endl;

    return 0;
}