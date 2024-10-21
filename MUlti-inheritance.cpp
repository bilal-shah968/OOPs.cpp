#include <iostream>
using namespace std;
class Parent 
{
public:
Parent()
{
    cout<<"Class parent"<<endl;
}

};

class Child: public Parent
{
    public:
    Child()
    {
        cout<<"class Child"<<endl;
    }
};

class GrandChild: public Child
{
  public:
  GrandChild()
  {
    cout<<"GrandChild"<<endl;
  }
};

int main()
{
    GrandChild gc;

    return 0;
   
}

