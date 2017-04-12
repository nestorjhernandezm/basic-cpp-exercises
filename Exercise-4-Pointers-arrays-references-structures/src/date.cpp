#include <iostream>

using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};

int main()
{
    // 4.4) Define a struct called Date to keep track of dates. Provide
    // functions that reads a Date from input, writes a Date to output
    // and initializes a Date with a date.

    Date today;

    today.day = 12;
    today.month = 4;
    today.year = 2017;

    cout << "Today is: " << today.day << " " << today.month << " "
        << today.year << endl;

    return 0;
}
