#include<iostream>
#include<iomanip>
using namespace std;

namespace suren
{
    class student; //declaring the class here

}
class suren::student
{
public:
    void display()
    {
        cout<<"Students are great"<<endl;
    }
};

int main()
{
    suren::student obj1;
    obj1.display();
    return 0;
}
