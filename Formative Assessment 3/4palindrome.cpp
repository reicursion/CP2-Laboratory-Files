#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

void titleBar(); //function for the title bar

int main(){
    // intiialize variables
    char str1[100];

    titleBar(); 

    // ask user input for a word
    cout << "\nEnter a word: ";
    cin.getline(str1, 100);

    // reverse the user inputted word
    string str_word(str1);
    reverse(str_word.begin(), str_word.end());

    // if else statement to check if it is a palindrome or not
    if (str_word == str1) {
        cout << str1 << " is a palindrome." << endl;
    } else {
        cout << str1 << " is not a palindrome." << endl;
    }

    return 0;
}


// function for the title bar
void titleBar(){
    for (int i = 0; i < 30; i++){
        cout << '*';
    }

    cout << "\nPALINDROME\n";

    for (int i = 0; i < 30; i++){
        cout << '*';
    }
}