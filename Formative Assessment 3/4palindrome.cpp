#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

void titleBar(); //function for the title bar

int main(){

    // initialize values
    char str1[100];
    string str_word(str1);
-
    titleBar();

    // ask user input for a word
    cout << "\nEnter a word: ";
    cin.getline(str1,100);

    // reverse the word
    reverse(str_word.begin(), str_word.end());

    // compare the two words using if statements
    if (str_word == str1){
        cout << str1 << " is a palindrome";
    } else {
        cout << str1 << " is not a palindrome";
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