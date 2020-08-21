#include<iostream>
using namespace std;

class student
{
  int roll;
  string name;
public:
    void setdata(void){cin>>roll>>name;};
    void putdata(void){cout<<roll<<name;};
    student(){cout<<"MS Dhoni is great";}
};
int main()
{
    student s1;
}



