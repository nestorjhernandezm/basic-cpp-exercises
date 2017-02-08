#include <typeinfo>  // typeid
#include <limits>  // numeric_limits
#include <string>

#include <iostream>

using namespace std;

template<class T> void print_data_info()
{
    cout << endl;
    string type_name = typeid(T).name();
    cout << "Type: " << type_name << endl;
    cout << "Size: " << sizeof(T) << " bytes" << endl;

    T min = numeric_limits<T>::min();
    T max = numeric_limits<T>::max();

    // Force the type conversion in declaration in case of char-like types
    const bool is_char_type = (type_name == "c" || type_name == "h" ||
        type_name == "a");

    if(!is_char_type)
    {
        cout << "Minimum value: " << min << endl;
        cout << "Maximum value: " << max << endl;
    }
    else
    {
        // char values could also be interpreted as integers through ASCII
        int ascii_min = min;
        int ascii_max = max;
        cout << "Minimum value: " << ascii_min << endl;
        cout << "Maximum value: " << ascii_max << endl;
    }

    cout << "Type is signed: " << std::numeric_limits<T>::is_signed << endl;
    cout << "Non-sign bits in type: " << std::numeric_limits<T>::digits
         << endl;
    cout << "Type has infinity: " << std::numeric_limits<T>::has_infinity
         << endl;
    cout << endl;
};

int main()
{
    // Let's print information regarding different data types
    // This will be dependent on the function implementation and
    // the architecture involved.
    print_data_info<bool>();
    print_data_info<int>();
    print_data_info<long>();
    print_data_info<short>();
    print_data_info<double>();
    print_data_info<float>();
    print_data_info<char>();
    print_data_info<unsigned int>();
    print_data_info<unsigned short>();
    print_data_info<unsigned long>();
    print_data_info<unsigned char>();
    print_data_info<signed int>();
    print_data_info<signed short>();
    print_data_info<signed long>();
    print_data_info<signed char>();
    print_data_info<wchar_t>();

    return 0;
}
