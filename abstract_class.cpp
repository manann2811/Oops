#include<iostream>
using namespace std;
class base
{
public:
    int p,r,t,si;
    virtual void display()=0;
    void show()
    {
        cout<<"Enter the value of P : "; 
        cin>>p;
        cout<<"Enter the value of R : "; 
        cin>>r;
        cout<<"Enter the value of T : ";
        cin>>t; 
        si=(p*r*t)/100;
        cout<<"\nSimple Interest : "<<si<<endl;
    }
};
class derived:public base
{
public:
    int p,r,t,si;
    void display()
    {
        cout<<"Enter the value of P : "; 
        cin>>p;
        cout<<"Enter the value of R : "; 
        cin>>r;
        cout<<"Enter the value of T : ";
        cin>>t; 
        si=(p*r*t)/100;
        cout<<"\nSimple Interest : "<<si<<endl;
    }
};

int main()
{
    derived d;
    d.display();
    d.show();
    return 0;
}

