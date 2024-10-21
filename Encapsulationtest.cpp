#include <iostream>
using namespace std;
class Rectangle
{
 private:
 double length;
 double width;
 public:
 void setlength(double len)
 {
    if (len > 0)
    {
        length = len; 
    }
    else
    {
        cout << "Length should be positive"<<endl;
    }
 }

 void setwidth(double wid)
 {
    if (wid > 0)
    {
        width = wid;
    }
    else 
    {
        cout<<"width should be positive"<<endl;
    }
 }
 
 double getArea()
 {
    return length * width;
 }

 double getPerimeter()
 {
    return 2 * (length + width);
 }
};

int main()
{
    Rectangle rect;

    rect.setlength(5.0);
    rect.setwidth(3.0);

    cout << "Area of rectangle: " << rect.getArea() << endl;
    cout << "Perimeter of rectangle: " << rect.getPerimeter() << endl;

    return 0;
}



