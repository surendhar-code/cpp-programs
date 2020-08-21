#include<iostream>
#include<string.h>
using namespace std;

class string
{
    char*name;
    int length;
public:
    string(char*t)
    {
        length=strlen(t);
        name=new char[length+1];
        strcpy(name,t);
    }
    void putdata(void){cout<<name;}
};

int main()
{
    ::string s1("suren");
    s1.putdata();
    return 0;
}
