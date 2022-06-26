#include<iostream>
using namespace std;

void data(){
    string name;
    int id;
    string role;
    static int count = 0;
    cout<<"Name : ";
    cin>>name;
    cout<<"ID : ";
    cin>>id;
    cout<<"Role : ";
    cin>>role;
    count++;

    void print();
    {
        cout<<"\nDetails"<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"ID : "<<id<<endl;
        cout<<"Role : "<<role<<endl;
    }
};

int main(){
    data();
    void print();
    return 0;
}
