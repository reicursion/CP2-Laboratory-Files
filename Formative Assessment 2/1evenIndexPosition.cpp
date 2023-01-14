// C++ program that identifies the position of all even numbers
// in an array of 10 elements
#include <iostream>
using namespace std;

int location();

int main()
{ 
    int i;      // array index
    int number[10];

    // get user input fof 10 numbers
    cout << "Enter 10 numbers: ";

    // for loop for the entered numbers be stored inside an array
    for (i = 0; i < 10; ++i)
    {
        cin >> number[i];
    }  

    // find the even number and their indices
    cout << "Even numbers are located at indices: ";

    // do while loop = while i < 10, execute the if statement
    do
    {
        // if-else statement to find even numbers, print the index if true, else, increment
        if (number[i] % 2 == 0)
        {
            cout << i << " ";
            ++i; 
        } else {
            ++i;
        }
    } while (i < 10);

    return 0;
}