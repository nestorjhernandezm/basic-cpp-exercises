#include <iostream>

using namespace std;

struct Date
{

    Date();
    Date(int, int, int);
    void read_date();
    void write_date();

    int day;
    int month;
    int year;
};

int main()
{
    // 4.4) Define a struct called Date to keep track of dates. Provide
    // functions that reads a Date from input, writes a Date to output
    // and initializes a Date with a date.

    Date today = {12, 4, 2017};
    today.write_date();

    Date halloween(31, 10, 2017);
    halloween.write_date();

    Date christmas;
    christmas.read_date();
    christmas.write_date();

    return 0;
}

Date::Date()
{

}

Date::Date(int dd, int mm, int yyyy)
{
    day = dd;
    month = mm;
    year = yyyy;
}

void Date::read_date()
{
    cout << "Introduce the day of the date (dd)" << endl;
    cin >> day;
    cout << "Introduce the day of the date (mm)" << endl;
    cin >> month;
    cout << "Introduce the day of the date (yyyy)" << endl;
    cin >> year;
}

void Date::write_date()
{
    cout << "Date is: " << day << "/" << month << "/" << year << endl;
}
