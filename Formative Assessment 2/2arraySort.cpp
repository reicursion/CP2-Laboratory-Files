#include <iostream>
using namespace std;

int main()
{
    // initialize variables
    int size = 0;
    int num[size];

    // get user input on what the array size would be
    cout << "Enter size of array: ";
    cin >> size;

    // get the elements of the array based from the size of the array
    for (int i = 1; i <= size; ++i)
    {
        cout << "Array Element: ";
        cin >> num[i];
    }


}