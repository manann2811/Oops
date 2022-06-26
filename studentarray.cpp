#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int rollno;

    void details()
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter roll no : ";
        cin>>rollno;
    }
    void subjects()
    {
        string arr[5];
        int Marks, sum=0;
        cout<<"Enter 5 Subjects :";
        for(int i=0; i<5; i++){
            cout<<"Subject "<<i+1<<" : ";
            cin>>arr[i];
            cout<<"Enter marks of "<<arr[i]<<" : ";
            cin>>Marks;
            sum =+ Marks;
        }
        cout<<sum;
    }
    void show_data()
    {
        cout<<"Name of Student : ";
        cout<<name;
        cout<<"Roll No of Student : ";
        cout<<rollno;
    }
};



int main()
{
    Student obj1, obj2, obj3;
    obj1.details();
    obj2.subjects();
    obj3.show_data();
}