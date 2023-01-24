#include<iostream>
#include<cstring>
using namespace std;

void titleBar(); //function for the title bar

int main(){
    // initialize values
    char str1[100];
    char str2[100];
    int res;

    titleBar();

    // get user input for first word (str1)
    cout << "\nEnter a first word (str1): ";
    cin.getline(str1, 100);
    // get user input for second word (str2)
    cout << "Enter a second word (str2): ";
    cin.getline(str2, 100);

    // use compare() function to compare 2 strings
    res = strcmp(str1, str2);

    // output if the two strings are equal (equal) or not (positive or)
    if (res == 0){
        cout << "equal\n";
    } else if (res > 0) {
        cout << "positive\n";
    } else {
        cout << "negative\n";
    }

    return 0;
}


// function for the title bar
void titleBar(){
    for (int i = 0; i < 30; i++){
        cout << '*';
    }

    cout << "\nSTRING COMPARE\n";

    for (int i = 0; i < 30; i++){
        cout << '*';
    }
}