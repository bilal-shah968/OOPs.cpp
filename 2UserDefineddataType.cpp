#include <iostream>
using namespace std;
class car
{
    public:
    string name;
    int price ;
    int seats;
    string type;

};
void print( car c)
{
  cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<" "<<endl;
}
int main()
{
    car c1;
    c1.name = "Honda city";
    c1.price = 1500000;
    c1.seats = 6;
    c1.type = "sedan"; 

    car c2;
    c2.name = " Suzuki Mehran";
    c2.price =  350000;
    c2.seats = 4;
    c2.type = "Hatchback";

     car c3;
    c3.name = " Suzuki Swift";
    c3.price =  700000;
    c3.seats = 5;
    c3.type = "SUV";
    
    print(c1);
    print(c2);
    print(c3);

    
}