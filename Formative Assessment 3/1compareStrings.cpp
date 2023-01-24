#include<iostream>
#include<string>
using namespace std;

void titleBar; //function for the title bar

int main(){
    titleBar();


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