#include <iostream>
#include <string>
using namespace std;

class Teacher 
{
public:
   string  name;
   string dept;
   string subject;
   double salary;

   void changeDept(string newDept)
   {
       dept = newDept;
   }
};


int main()
{
     Teacher t1;
     t1.name = "bilal";
     t1.subject = "c++";
     t1.dept = "Computer Science";
     t1.salary = 25000;
     cout << t1.name <<endl; 

     return 0;
}
