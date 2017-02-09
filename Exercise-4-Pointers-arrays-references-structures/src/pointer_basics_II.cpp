#include <iostream>

using namespace std;

int main()
{
    // 4.2) Find the max of an integral data set. The program will ask the
    // user to input the number of data values in the set and each value.
    // The program prints on screen a pointer that points to the max value.

    int size;
    cout << "Enter the number of elements in the data set: " << endl;
    cin >> size;

    int max = 0;
    int* ptr_max = &max;

    for (int i = 0; i < size; i++)
    {
        int value;
        cout << "Enter value " << i + 1 << " of the dataset" << endl;
        cin >> value;

        if (!i)
        {
            max = value;
        }
        else
        {
            if (max < value)
            {
                max = value;
            }
        }
    }

    cout << "The maximum is: " << *ptr_max << endl;

    return 0;
}
