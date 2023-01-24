#include<iostream>
#include<cstring>
using namespace std;

void titleBar(); //function for the title bar

int main(){
    // initialize values
    char str1[100];
    char str2[100];
    string str3;
    int res;

    titleBar();

    // get user input for first word (str1)
    cout << "\nEnter a first word (str1): ";
    cin.getline(str1, 100);
    // get user input for second word (str2)
    cout << "Enter a second word (str2): ";
    cin.getline(str2, 100);

    // use strcpy() function to copy str2 to str1
    strcpy(str1, str2);

    // output the value of str1
    cout << "new string value for str1: " << str1 << endl;

    return 0;
}


// function for the title bar
void titleBar(){
    for (int i = 0; i < 30; i++){
        cout << '*';
    }

    cout << "\nSTRING COPY\n";

    for (int i = 0; i < 30; i++){
        cout << '*';
    }
}