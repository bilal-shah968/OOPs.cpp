#include <iostream>

using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
  
    Rectangle() {
        length = 1.0;
        width = 1.0;
        cout << "Default constructor called." << endl;
    }

    Rectangle(float l, float w) {
        length = l;
        width = w;
        cout << "Parameterized constructor called." << endl;
    }

    
    float area()
     {
        return length * width;
    }

    float perimeter()
     {
        return 2 * (length + width);
    }
};

int main() {

    Rectangle rect1;
    cout << "Area (default): " << rect1.area() << endl;
    cout << "Perimeter (default): " << rect1.perimeter() << endl;
    Rectangle rect2(5.0, 3.0);
    cout << "Area (custom): " << rect2.area() << endl;
    cout << "Perimeter (custom): " << rect2.perimeter() << endl;
    return 0;
}
