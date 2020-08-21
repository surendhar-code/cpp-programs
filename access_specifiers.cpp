#include<iostream>
using namespace std;
//access specifiers-private,public,protected
// accessing private members using public.
class student
{
   private:
        int roll;
        string name;
        void dummy(){cout<<"IPL begins.....!!!!!";}
   public:
        void getstudent(int r,string n){roll=r;name=n;}
        void display(){cout<<roll<<endl<<name<<endl;dummy();}


};

int main()
{
    student s1;
    s1.getstudent(20,"surendhar");
    s1.display();

    return 0;
}
