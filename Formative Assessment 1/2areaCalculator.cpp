#include <iostream>
#include <math.h>
using namespace std;

// functions breadcrumbs
int menuOptions();

int main()
{
    int choice = 0;
    //square
    float side = 0, areaSquare = 0;

    choice = menuOptions();

    switch(choice)
    case 1: // square
        {
            for (int i = 0; i < 75; i++){
            cout << "-";
            }
    
            cout << "\n\t\t\t  AREA OF SQUARE" << endl;
   
            for (int i = 0; i < 75; i++){
            cout << "-";
            }

            // get user input on what side
            cout << "\nEnter the side of the square: ";
            cin >> side;

            // calculate area of the square => area = a x a
            areaSquare = pow(side, 2);
            cout << "\nThe area is " << areaSquare << " sq. units" << endl;
            break;
        }


    return 0;
}

// function for menu options
int menuOptions()  
{
    int input;

    // menu bar
    for (int i = 0; i < 75; i++){
        cout << "=";
    }
    
    cout << "\n\t\t\t\tMENU" << endl;
   
    for (int i = 0; i < 75; i++){
        cout << "=";
    }
    cout << endl;
    // options list
    cout << "[1] - Area of Square\n";
    cout << "[2] - Area of Rectangle\n";
    cout << "[3] - Area of Triangle\n";
    cout << "[4] - Area of Circle\n";
    cout << "[5] - Exit\n";
    
    for (int i = 0; i < 75; i++)
    {
        cout << "-";
    }

    // get user input for what shape to use
    cout << "\nEnter your choice: ";
    cin >> input; 

    return input;    
}