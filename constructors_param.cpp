#include<iostream>
using namespace std;

class student
{
  int roll;
  string name;
public:
    student(){cout<<"Csbs students are great \n";}
    student(string n,int r){name=n;roll=r;}
    void putdata(void){cout<<name<<" "<<roll<<'\n';}
};
int main()
{
    student s1;
    student s2=student("suren",35);//explicit call
    student s2("charan",06)
    s2.putdata();
    return 0;
}



