#include<iostream>
using namespace std;

class automobile
{
    string name;
    int build;
    int price;
public:
    void setdata(void);
    void putdata()
    {
        cout<<"car name: "<<name<<'\n';
        cout<<"car build year: "<<build<<'\n';
        cout<<"car price: "<<price<<'\n';
    }
};
void automobile::setdata(void)
{
    cin>>name;
    cin>>build;
    cin>>price;
}

int main()
{
    automobile car[3];
    for(int i=0;i<3;i++)
    {
        car[i].setdata();
        car[i].putdata();
    }

    for(int i=0;i<3;i++)
    {
        car[i].putdata();
    }
    return 0;
}


