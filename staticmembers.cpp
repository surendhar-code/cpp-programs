#include<iostream>
#include<iomanip>
using namespace std;

class Test
{
    static int x;
public:
    Test()  //constructor is used
    {
        x++;
    }
    static int getx()
    {

        return x;
    }
};

int Test::x=0;

int main()
{
    cout<<Test::getx()<<" ";
    Test t[5];
    cout<<Test::getx();
    return 0;
}
