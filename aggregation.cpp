#include<iostream>
using namespace std;

class clg
{
    public:
    string clgname;

    void set_data(){
        cout<<"Enter College name : ";
        cin>>clgname;
    }  
    void print_data(){
        cout<<clgname;
    }
};

class Student{
    public:
    clg name;
    string sname;
    string branch;
    void set(){
        cout<<"Enter Student name : ";
        cin>>sname;
        cout<<"Branch name : ";
        cin>>branch;
    }
    void print(){
        cout<<sname<<" is student of "<branch<<" in ";
    }
};

int main(){
    clg a;
    Student b;
    a.set_data();
    b.set();
    b.print();
    a.print_data();

    return 0;
}