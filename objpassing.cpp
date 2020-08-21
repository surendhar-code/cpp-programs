#include<iostream>
using namespace std;

class time
{
    int minutes;
    int hrs;
public:
    void setdata(int a,int b){hrs=a;minutes=b;}
    void putdata(void){cout<<"Hours: "<<hrs<<" "<<"Minutes: "<<minutes<<'\n';}
    void sumtime(time,time);
};
void time::sumtime(time t1,time t2)
{
    minutes=t1.minutes+t2.minutes;
    hrs=minutes/60;
    minutes=minutes%60;
    hrs=hrs+t1.hrs+t2.hrs;
}

int main()
{
    time t1,t2,t3;
    t1.setdata(2,45);
    t2.setdata(3,54);
    t1.putdata();
    t2.putdata();
    t3.sumtime(t1,t2);
    t3.putdata();
    return 0;

}
