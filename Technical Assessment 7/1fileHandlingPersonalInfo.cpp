#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;

int choice;

int main() {
    string name, course, email, contact;
    int choice;
    fstream myFile;

    while (choice != 4) {
    // menu
    cout << "==============================" << endl;
    cout << "  PERSONAL INFORMATION SHEET" << endl;
    cout << "==============================" << endl;

    cout << "[1] Add Record" << endl;
    cout << "[2] Read Record" << endl;
    cout << "[3] Append Record" << endl;
    cout << "[4] Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    system("cls");

    // switch case to enter inside each menu
    switch (choice) {
        case 1: { // add record
            cout << "==============================" << endl;
            cout << "\tADD RECORD" << endl;
            cout << "==============================" << endl;

            // open the file in write mode
            myFile.open("mytext.txt", ios::out);

            cout << "Fill up the form below.\n\n";

            cout << "Enter your name: ";
            cin.ignore(); // this is added so that the first getline will not be skipped
            getline(cin, name);
            cout << "Enter your course: ";
            getline(cin, course);
            cout << "Enter your email: ";
            getline(cin, email);
            cout << "Enter your contact: ";
            getline(cin, contact);

            // if statement to input the data to the file
            if (myFile.is_open()) {
                myFile << "Name: " << name << endl;
                myFile << "Course: " << course << endl;
                myFile << "Email: " << email << endl;
                myFile << "Contact: " << contact << endl << endl;
                cout << "\nRecord added successfully.\n\n";
            } else {
                cout << "File is not open" << endl;
            }
            myFile.close();

            cout << "Press any key to continue..." << endl;
            getch();
            system("cls");
            break;
        }

        case 2: { // read record
            cout << "==============================" << endl;
            cout << "\tREAD RECORD" << endl;
            cout << "==============================" << endl << endl;

            // open the file in read mode
            myFile.open("mytext.txt", ios::in);

            // if statement to  read data from the file and output it to the console
            if (myFile.is_open()) {
                string line; // variable to store the line
                while (getline(myFile, line)) {
                    cout << line << endl;
                }
            }
            myFile.close();

            cout << "\n\nAll records presented successfully.\n";
            cout << "Press any key to continue..." << endl;
            getch();
            system("cls");
            break;
        }

        case 3: { // append record
            cout << "==============================" << endl;
            cout << "\tAPPEND RECORD" << endl;
            cout << "==============================" << endl << endl;

            // open the file in append mode
            myFile.open("mytext.txt", ios::app);

            // if statement to get the user input first, then append it to the file
            if (myFile.is_open()) {
                cout << "Add more information below.\n\n";
                cout << "Enter your name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter your course: ";
                getline(cin, course);
                cout << "Enter your email: ";
                getline(cin, email);
                cout << "Enter your contact: ";
                getline(cin, contact);

                myFile << "Name: " << name << endl;
                myFile << "Course: " << course << endl;
                myFile << "Email: " << email << endl;
                myFile << "Contact: " << contact << endl << endl;

                cout << "\nRecord saved successfully.\n\n";
            } else {
                cout << "File is not open" << endl;
            }
            myFile.close();

            cout << "Press any key to continue..." << endl;
            getch();
            system("cls");
            break;
        }

        case 4: { //exit
            cout << "Thank you for using this program.\n";
            cout << "Press any key to continue..." << endl;
            getch();
            system("cls");
            break;
        }

        default:
            cout << "Invalid input. Please try again.";
            getch();
            system("cls");
            break;

        }
    } while (choice != 4);

    return 0;
}