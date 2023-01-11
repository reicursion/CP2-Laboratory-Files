// C++ program that counts the number of vowels and whitespaces in a string
// note: the user input must be all capital letters only
#include <iostream>
using namespace std;

int main()
{
    string str;
    int A = 0, E = 0, I = 0, O = 0, U = 0;
    int whitespace = 0;

    // get user input for a string 
    cout << "Enter a string: ";
    getline(cin, str);

    // for loop to check each character in the string
    for (int i = 0; i < str.length(); i++)
    {
        // if else statements to check for vowels and whitespaces
        if (str[i] == 'A')
            A++;
        else if (str[i] == 'E')
            E++;
        else if (str[i] == 'I')
            I++;
        else if (str[i] == 'O')
            O++;
        else if (str[i] == 'U')
            U++;
        else if (str[i] == ' ')
            whitespace++;
    }

    cout << "Vowels: \n";
    cout << "\t A \t\t" << A << endl;
    cout << "\t E \t\t" << E << endl;
    cout << "\t I \t\t" << I << endl;
    cout << "\t O \t\t" << O << endl;
    cout << "\t U \t\t" << U << endl;
    cout << "\t whitespaces \t" << whitespace << endl;
}