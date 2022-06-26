#include<iostream>

using namespace std;

class Student
{
    public:
      string name;
      int rollno;
        void read_data()
        {
            cout<<"Name is:";
            cin>>name;
            cout<<"\nRoll no is:";
            cin>>rollno;
        }
        void print_data()
        {
            cout<<"\nStudent name is:"<<name<<"and roll no is:"<<rollno;
        }
};
int main()
{
    Student object1;

    object1.read_data();
    object1.print_data();

    return 0;
}