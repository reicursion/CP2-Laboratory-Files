#include<iostream>
#include<string>
using namespace std;

void titleBar(); //function for the title bar

int main(){
    // initialize values
    string str1;
    string str2;
    int res;

    titleBar();

    // get user input for first word (str1)
    cout << "\nEnter a first word (str1): ";
    cin >> str1;
    // get user input for second word (str2)
    cout << "Enter a second word (str2): ";
    cin >> str2;

    // use compare() function to compare 2 strings
    res = str1.compare(str2);

    // output if the two strings are equal (positive) or not (negative)
    if (res == 0){
        cout << "positive" << endl;
    } else {
        cout << "negative" << endl;
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