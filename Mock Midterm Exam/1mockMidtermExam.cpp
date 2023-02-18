/*
#include <iostream>;  // tanggalin yung ;
using namespace stV;
            // std dapat


struct Person:  // tanggalin yung colon
[   // dapat curly braces {}
    char name(50); // dapat  [] instead of ()
    int age;
    char salary; // change char to float or int
];

int main(); // tanggalin yung ;
{
    Person p1;

    cout << "Enter Full name: ";
    cin.get(p2.name, 50); // change p2 to p1
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " >> p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;

    return 0  // add ;
}

*/

#include <iostream>
using namespace std;

struct Person {
    char name[50];
    int age;
    char salary;
};

int main(){
    Person p1;

    cout << "Enter Full name: ";
    cin.get(p1.name,50);
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;

    return 0;
}