#include<iostream>
#include<iomanip>
using namespace std;

class player
{
private:
    int id;
    static int next_id;
public:
    int getid()
    {
        return id;
    }
    player(){
        id=next_id++;

    }
};
int player::next_id=1;

int main()
{
    player p1;
    player p2;
    player p3;
    cout<<p1.getid()<<" ";
    cout<<p2.getid()<<" ";
    cout<<p3.getid()<<" ";
    return 0;
}
