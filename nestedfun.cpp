#include<iostream>
using namespace std;
class test
{
    int a,b;
public:
    void allTest()
    {
        cout<<"all test"<<endl;
        display();
    }

    void settest(int x,int y)
    {
        a=x;
        b=y;
        allTest();
    }
    void display()
    {
        cout<<a<<b;
    }
};
int main()
{
    test t1;
    t1.settest(10,20);
    return 0;
}
