#include<iostream>
#include<iomanip>
using namespace std;

class sample
{
    int num1,num2;
public:
    void setvalue(int x,int y){num1=x;num2=y;}
    friend float mean(sample s);
};

float mean(sample s)
{
    return(s.num1+s.num2)/2.0;
}

int main()
{
    sample s1;
    s1.setvalue(10,20);
    cout<<mean(s1);
    return 0;

}
