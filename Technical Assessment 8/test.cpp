#include <iostream>
using namespace std;

class Shape {
    public: // access modifier set to public so the attributes can be accessed outside the class
        // double type values == base and height
        double base, height;
        // member function get_data()) to compute the area

        // get_data function to get base and height
        void get_data() {
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
        }

        // display_area() will then use the received attributes from class Shape to compute for the base
        double display_area() {
            return 0;
        }
};

// derived class Triangle from Shape class
class Triangle : public Shape { // the class will receive the public attributes of shape, which is base and height
    public:
        // display_area() will then use the received attributes from class Shape to compute for the base
        double display_area() {
            return 0.5 * base * height;
            // the answer will be returned to the class Shape
        }
};

// derived class Rectangle from Shape class
class Rectangle : public Shape { // the class will receive the public attributes of shape, which is base and height
    public:
        // display_area() will then use the received attributes from class Shape to compute for the base
        double display_area() {
            return base * height;
            // the answer will be returned to the class Shape
        }
};

int main() {
    // initialize t for data tpe Triangle and r for data type Rectangle
    Triangle t;
    Rectangle r;

    // get_data() will get the base and height of the triangle
    t.get_data();
    cout << "Area of triangle is " << t.display_area() << endl;

    // get_data() will get the length and width of the rectangle
    r.get_data();
    cout << "Area of rectangle is " << r.display_area() << endl;

    return 0;
}