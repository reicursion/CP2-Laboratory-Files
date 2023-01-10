#include <iostream>
#include <iomanip>
using namespace std;

// functions breadcrumb
int menuOptions();  // function for showing the menu bar and options menu
int addition(int a, int b); // function for addition
int subtraction(int a, int b); // function for subtraction
int multiplication(int a, int b); // function for multiplication
int division(int a, int b); // function for division
int modulo(int a, int b); // function for modulus
void loop(); // function for repeating the whole program

int main()
{
    int choice, num1, num2;
    int sum = 0, difference = 0, product = 0, quotient = 0, remainder = 0;
    char y;

    choice = menuOptions();
 
    switch(choice){
        case 1: // addition
        {
            cout << "Enter your two integer numbers: ";
            cin >> num1 >> num2;
            sum = addition(num1, num2);
            cout << "\nResult: " << sum << endl;
            break;
        } 
        case 2: // subtraction
        {          
            cout << "Enter your two integer numbers: ";
            cin >> num1 >> num2;
            difference = subtraction(num1, num2);
            cout << "\nResult: " << difference << endl;
            break;
        }
        case 3: // multiplication
        {
            cout << "Enter your two integer numbers: ";
            cin >> num1 >> num2;
            product = multiplication(num1, num2);
            cout << "\nResult: " << product << endl;
            break;
        }
        case 4: // division
        {
            cout << "Enter your two integer numbers: ";
            cin >> num1 >> num2;
            quotient = division(num1, num2);
            cout << "\nResult: " << quotient << endl;
            break;
        }
        case 5: // division
        {
            cout << "Enter your two integer numbers: ";
            cin >> num1 >> num2;
            remainder = modulo(num1, num2);
            cout << "\nResult: " << remainder << endl;
            break;
        }
        default: cout << "Invalid input. Try again." << endl;
    }

    loop();

    return 0;
}

// function for menu
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

    // options list
    cout << "\n\t1. Add\n";
    cout << "\t2. Subtract\n";
    cout << "\t3. Multiply\n";
    cout << "\t4. Divide\n";
    cout << "\t5. Modulo\n";

    // get user input for what operator to use
    cout << "Enter your choice(1-5): ";
    cin >> input; 

    return input;    
}

// function for addition
int addition(int a, int b)
{
    int add;
    add = a + b;
    return add;
}

// function for subtraction
int subtraction(int a, int b)
{
    int sub;
    sub = a - b;
    return sub;
}

// function for multiplication
int multiplication(int a, int b)
{
    int mult;
    mult = a * b;
    return mult;
}

// function for division
int division(int a, int b)
{
    int div;
    div = a / b;
    return div;
}

// function for modulus
int modulo(int a, int b)
{
    int mod;
    mod = a % b;
    return mod;
}

void loop()
{
    char y;
    cout << "Press y or Y to continue: ";
    cin >> y;

    if (y == 'Y' || 'y')
        main();
}
