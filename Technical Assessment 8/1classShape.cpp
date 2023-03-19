#include <iostream>
using namespace std;

class Shape {
    public: // access modifier set to public so the attributes can be accessed outside the class
        // double type values == base and height
        double base, height;
        // member function get_data()) to compute the area

        void get_data() {
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
        }
        double display_area() {
            return 0;
        }
};

class Triangle : public Shape {
    public:
        double display_area() {
            return 0.5 * base * height;
        }
};

class Rectangle : public Shape {
    public: 
        double display_area() {
            return base * height;
        }
};

int main() {
    Triangle t;
    Rectangle r;

    t.get_data();
    cout << "Area of triangle is " << t.display_area() << endl;

    r.get_data();
    cout << "Area of rectangle is " << r.display_area() << endl;

    return 0;
}