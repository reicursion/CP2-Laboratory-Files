// C++ program that gets desired size of an array, enter the elements
// and the elements will be sorted using an algorithm in an ascending order
#include <iostream>
using namespace std;

int main(){
    int size = 0, temp = 0;
    
    // get user input on what the array size would be
    cout << "Enter the size of the array: ";
    cin >> size;

    // initialize the array
    int num[size];

    // get the elements of the array based from the size of the array
    for(int i = 0; i < size; i++){
        cout << "Array element " << i+1 << ": ";
        cin >> num[i];
    }
    
    // outer for loop to go through each element in the array
    for(int i = 0; i < size; i++)
    {
        // inner for loop to go through each element in the array
        for(int j = i + 1; j < size; j++)
        {
            // if statement that iif the size is greater than the next one
            // switch the two values using a temp variable
            if(num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    // print the result of the sorting algorithm
    cout << "Sorted Array: ";
    for(int i = 0; i < size; i++){
        cout << num[i] << " ";
    }
    
    return 0;
}
