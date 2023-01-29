#include<iostream>
#include<cstring>
using namespace std;

int main(){
    // initialize variables
    char str[100];

    // get user input on what string to convert
    cout << "Enter some string: ";
    cin.getline(str,100);

    // for loop to get through each letter
    for (int i = 0; i < strlen(str); i++){
        // if else loop to check if it is a space or not
        if (i == 0){
            str[i] = toupper(str[i]);
        // else if statement, convert letter to uppercase if previous charcter is a space
        } else if (str[i - 1] == ' '){
            str[i] = toupper(str[i]);
        }
    }

    // print the output when the conversion to uppercase is finished
    cout << str;

    return 0;
}