#include <typeinfo>  // typeid
#include <limits>  // numeric_limits

#include <iostream>  // cout, endl

using namespace std;

template<class T> void print_data_info()
{
    cout << endl;
    cout << "Type: " << typeid(T).name() << endl;
    cout << "Size: " << sizeof(T) << " bytes" << endl;
    cout << "Minimum value: " << numeric_limits<T>::min() << endl;
    cout << "Maximum value: " << numeric_limits<T>::max() << endl;
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

    return 0;
}
