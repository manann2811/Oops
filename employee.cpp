#include<iostream>
using namespace std;

class Employee
{
    public:
        string name;
        int id;
        long salary;
        string role;

        void Details()
        {
            cout<<"Name : ";
            cin>>name;
            cout<<"ID : ";
            cin>>id;
            cout<<"Salary : ";
            cin>>salary;
            cout<<"Role : ";
            cin>>role;
        }
        void get_data()
        {
            cout<<"Name : "<<name<<endl;
            cout<<"ID : "<<id<<endl;
            cout<<"Salary : "<<salary<<endl;
            cout<<"Role : "<<role<<endl;
        }
};
int main()
{
    Employee obj1;
    obj1.Details();
    obj1.get_data();

    return 0;   
}