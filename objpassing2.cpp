#include<iostream>
using namespace std;

class distance
{
    int inches;
    int feet;
public:
    void setdata(int f,int i){feet=f;inches=i;}
    void putdata(void){cout<<"Feet: "<<feet<<" inches: "<<inches<<'\n';}
    void sumdistance(distance,distance);
};
void distance::sumdistance(distance d1,distance d2)
{
    inches=d1.inches+d2.inches;
    feet=inches/12;
    inches=inches%12;
    feet=feet+d1.feet+d2.feet;
}

int main()
{
    ::distance d1,d2,d3;
    d1.setdata(7,8);
    d2.setdata(6,6);
    d1.putdata();
    d2.putdata();
    d3.sumdistance(d1,d2);
    d3.putdata();
    return 0;
}
