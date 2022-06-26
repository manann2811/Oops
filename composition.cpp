#include<iostream>
using namespace std;
class Employee
{
    public:
    int id;
    string name,job;
    void get()
    {
        cout<<"Enter Employee id : ";
        cin>>id;
        cout<<"Enter Employee name : ";
        cin>>name;
        cout<<"Job of Employee : ";
        cin>>job;
    }
};
class Company
{
    public:
    string Cnm;
    Employee obj;
    public:
    Company()
    {
        obj.get();
       

        cout<<"Enter Company name : ";
        cin>>Cnm;
    }
};
int main()
{
    Company c;
    cout<<"Employee name: "<<c.obj.name<<"\nEmployee id: "<<c.obj.id<<"\nWorks as: "<<c.obj.job<<" \nCompany name: "<<c.Cnm<<endl;
}

