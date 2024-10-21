#include <iostream>
using namespace std;
class Parent
{
    public:
    int x;

    protected:
    int y;

    private:
    int z;

};

class child1: public Parent
{
  //x will remain public
  //y will remain protected
  //z wll  not be accesible
};

class child2: private Parent 
{
    
  //x will remain public
  //y will remain protected
  //z wll be inaccesible
};

class child3: protected Parent
{
    
  //x will remain public
  //y will remain protected
  //z wll be in accesible
};