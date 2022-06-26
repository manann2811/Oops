#include<iostream>
using namespace std;

class simpleInterest
{
 private:
     float principle;
     float rate;
     float time;
     float si;
     float amount;

 public:
    void input( )
          {
                 cout<<"Enter Principle Amount : ";
                 cin>>principle;
                 cout<<"Enter Rate of Interest : ";
                 cin>>rate;
                 cout<<"Enter Number of years : ";
                 cin>>time;

                 si= (principle*rate*time) /100;
                 amount = si + principle;

          }

    void print_details()
         {
                cout<<"\nDetails are : \n";
                cout<<"\nPrinciple Amount: "<<principle;
                cout <<"\nRate of Interest: "<<rate;
                cout <<"\nNumber of years: "<<time;
                cout <<"\nInterest : "<<si;
                cout <<"\nTotal Amount : "<<amount<<"\n\n";
         }
};


int main ()
{
    simpleInterest obj;

    obj.input();
    obj.print_details();

    return 0;
}