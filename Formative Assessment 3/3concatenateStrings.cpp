#include<iostream>
#include<cstring>
using namespace std;

void titleBar(); //function for the title bar

int main(){
    // initialize values
    char str1[100];
    char str2[100];
    string str3;

    titleBar();

    // get user input for first word (str1)
    cout << "\nEnter a first word (str1): ";
    cin.getline(str1, 100);
    // get user input for second word (str2)
    cout << "Enter a second word (str2): ";
    cin.getline(str2, 100);

    // use strcat() function to copy str2 to str1
    strcat(str1, str2);

    // output the value of str1
    cout << "new string value for str1: " << str1;

    return 0;
}


// function for the title bar
void titleBar(){
    for (int i = 0; i < 30; i++){
        cout << '*';
    }

    cout << "\nSTRING CONCATENATION\n";

    for (int i = 0; i < 30; i++){
        cout << '*';
    }
}