#include <iostream>

using namespace std;
//create a class
class train
{
    private:
        int train_no;
        string train_name;     //data members of the class
        int passengers;
    public:
        void get_train_details();
        void print_details();        //member functions

};
void train::get_train_details()
{
    cout<<"Enter the train no: "<<endl;
    cin>>train_no;
    cout<<"Enter the train name: "<<endl;
    cin>>train_name;
    cout<<"Enter the no.of passengers: "<<endl;
    cin>>passengers;

}

void train::print_details()
{
    cout<<"Train no. : "<<train_no<<endl;          //defining data function -outside the class function
    cout<<"Train name. : "<<train_name<<endl;
    cout<<"no.of passengers : "<<passengers<<endl;

}

int main()
{
    train t1;  //creation of an object.
    t1.get_train_details();
    t1.print_details();


    return 0;
}
