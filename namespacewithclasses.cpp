#include<iostream>
#include<iomanip>
using namespace std;

namespace suren
{
    class student
    {
    public:
        void display(){cout<<"students are great";}
    };
}

int main()
{
    suren::student obj1;
    obj1.display();
    return 0;
}
