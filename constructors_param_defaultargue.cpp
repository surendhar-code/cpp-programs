#include<iostream>
using namespace std;

class student
{
  int roll;
  string name;
public:
    student(){cout<<"Csbs students are great \n";}
    student(string n,int r=40){name=n;roll=r;}  //parameterized constructor with default arguements.
    void putdata(void){cout<<name<<" "<<roll<<'\n';}
};
int main()
{
    student s1;
    student s2=student("suren");//explicit call

    s2.putdata();
    return 0;
}




