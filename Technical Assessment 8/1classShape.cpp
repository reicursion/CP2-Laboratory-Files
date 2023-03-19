#include <iostream>
using namespace std;

class Shape {
    public: // access modifier set to public so the attributes can be accessed outside the class
        // double type values == base, height, length, width
        double base = 0, height = 0, length = 0, width = 0;

        Shape() {
            base = 0;
            height = 0;
            length = 0;
            width = 0;
        }

        void get_data();

        double display_area();
    };

// derived class Triangle from Shape class
class Triangle : public Shape {
    // the class will receive the public attributes of shape, which is base and height
    public:
        // function get_data() to get base and height of triangle
        void get_data() {
            cout << "Enter base and height: ";
            cin >> base >> height;
        }
        // display_area() will then use the received attributes from class Shape to compute for the base
        double display_area() {
            return 0.5 * base * height; // the answer will be returned to the class Shape
        }
};

// derived class Rectangle from Shape class
class Rectangle : public Shape {
    public:
        // function get_data() to get length and width of rectangle
        void get_data() {
            cout << "Enter length and width: ";
            cin >> length >> width;
        }
        double display_area() {
            return length * width;
        }
};

int main() {
    Shape *s;
    double area;

    // Triangle
    s = new Triangle();
    s->get_data(); // get_data() will be called from the derived class Triangle
    area = s->display_area(); // display_area() will be called from the derived class Triangle
    cout << "Area of triangle is " << area << endl;
    delete s;

    // Rectangle
    s = new Rectangle(); // s will be assigned to the derived class Rectangle
    s->get_data();
    area = s->display_area();
    cout << "Area of rectangle is " << area << endl;

    delete s;
    return 0;
}