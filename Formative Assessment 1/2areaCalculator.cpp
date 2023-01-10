#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

// functions breadcrumbs
int menuOptions();

int main()
{
    int choice = 0;
    //square
    float side = 0, areaSquare = 0;
    float length = 0, width = 0, areaRectangle = 0;
    float base = 0, height = 0, areaTriangle = 0;
    float radius = 0, areaCircle = 0;
    const float pi = 3.14159;

    choice = menuOptions();

    switch(choice)
    {
        case 1: // square
            // title bar for square
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

        case 2: //rectangle
            // title bar for rectangle
            for (int i = 0; i < 75; i++){
            cout << "-";
            }
            cout << "\n\t\t\t  AREA OF RECTANGLE" << endl;
            for (int i = 0; i < 75; i++){
            cout << "-";
            }

            // get user input the length and width of the rectangle
            cout << "\nEnter the length and with of the rectangle: ";
            cin >> length >> width;

            // calculate the area of the rectange => area = l x w
            areaRectangle = length * width;
            cout << "\nThe area is " << areaRectangle << " sq. units" << endl;
            break;

        case 3: // triangle
            // title bar for triangle
            for (int i = 0; i < 75; i++)
            {
                cout << "-";
            }
            cout << "\n\t\t\t  AREA OF TRIANGLE" << endl;
            for (int i = 0; i < 75; i++)
            {
                cout << "-";
            }

            // get user input the base and height of the triangle
            cout << "\nEnter the base and height of the triangle: ";
            cin >> base >> height;

            // calculate the area of the triangle => (1/2) x bh
            areaTriangle = (base * height) / 2;
            cout << "The area is " << areaTriangle << " sq. units" << endl;
            break;

        case 4: // circle
            // title bar for circle
            for (int i = 0; i < 75; i++)
            {
                cout << "-";
            }
            cout << "\n\t\t\t  AREA OF CIRCLE" << endl;
            for (int i = 0; i < 75; i++)
            {
                cout << "-";
            }

            // get user input of radius of the circle
            cout << "\nEnter the radius: ";
            cin >> radius;

            // calculate the area of the circle => pi * r^2
            areaCircle = pi * pow(radius, 2);
            cout << "The area is " << areaCircle << " sq. units";

        case 5: // exit
            cout << "Thank you!\n";
            cout << "Press any key to continue...";
            getch();
            break;
        
        default: 
            cout << "Invalid choice. Please enter a number between 1 and 5.\n";
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