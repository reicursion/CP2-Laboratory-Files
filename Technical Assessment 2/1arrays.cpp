#include  <iostream>
using namespace std;

int main()
{
    int inputNum[10];   //initialize array
    int findNum;        //initialize the number being searched
    int count = 0;      //initialize the times the findNum appeared

    // ask user to input 10 integers in the array
    cout << "Enter 10 numbers: ";

    // for loop so that the 10 numbers will be stored in the array
    for (int i = 0; i < 10; i++){
        cin >> inputNum[i];
    }

    // ask user to input an integer to find in the array
    cout << "Enter a number:";
    cin >> findNum;

    // for loop to check if the findNum exists in the array
    for (int i = 0; i < 10; i++) {
        if (inputNum[i] == findNum) {
            count++;
        }
    }

    // print the number of times findNum appeared in the array
    cout << "Times of number " << findNum << " present in the array: " << count;

    return 0;
}