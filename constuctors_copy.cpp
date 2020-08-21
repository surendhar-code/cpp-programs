#include<iostream>
using namespace std;

class student
{
  int roll;
  string name;
public:
    student(){cout<<"Csbs students are great \n";} //default constructors
    student(string n,int r){name=n;roll=r;}// parameterized constructors
    student(student &s) //copy constructor
    {
        roll=s.roll;
        name=s.name;
    }
    void putdata(void){cout<<name<<" "<<roll<<'\n';}
};
int main()
{
    student s1;
    student s2("suren",35);
    s2.putdata();
    student s3(s2);
    s3.putdata();
    return 0;
}




