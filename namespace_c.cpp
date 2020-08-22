#include<iostream>
#include<iomanip>
using namespace std;

namespace first
{
    int number=20;
}

int number=40;

int main()
{

    cout<<"local var : "<<number<<endl;
    cout<<"namespace var : "<<first::number<<endl;
    return 0;

}
