#include <iostream>
using namespace std;
class Student // Student is a new data type
{
public:
  string name;
  int rno;
  float gpa;
  Student(string s, int r, float g)
  {
    name = s;
    rno = r;
    gpa= g;
  }

};

int main()
{
 Student s1("bilal shah",12,8.2);

 //Student s2;
 //s2.name = "Hasnain";
 //s2.rno = 12;
 //s2.gpa = 6.2;
 cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<endl;
 //cout<<s2.name<<" "<<s2.gpa<<" "<<s2.rno<<endl;

}
