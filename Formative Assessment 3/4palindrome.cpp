#include<iostream>
#include<cstring>
using namespace std;

void titleBar(); //function for the title bar

int main(){
    // initialize values
    char str1[100];
    char str2[100];

    titleBar();

    // ask user input for a word
    cout << "Enter a word: ";
    cin.getline(str1,100);

    // reverse the word and store it in a new variable
    for (int i = strlen(str1) - 1; i >= 0; i--){
        str2[strlen(str1) - 1 - i] = str1[i];
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