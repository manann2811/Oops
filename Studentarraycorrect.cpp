#include <iostream>
using namespace std;

class Student
{
    public:
    string name;
    int rollno;
    int sum=0;
    double perc;
    int arr[5];
    void set_data()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the rollno.:";
        cin>>rollno;
        for(int i=0; i<5; i++)
        {
            cout<<"Enter the marks of Subject "<<i+1<<" : ";
            cin>>arr[i];
        }
    }
    void get_data()
    {
        cout<<"\nDisplaying the information:";
        cout<<"\nName : "<<name;
        cout<<"\nRoll no. : "<<rollno;
        for(int i=0; i<5; i++){
            cout<<"\nMarks of Subject "<<i+1<<" : "<<arr[i];
        } 
        cout<<"\nTotal marks and percentage:";
        for(int i=0; i<5; i++)
        {
            sum = sum+arr[i];
            perc = (sum/5);
        }
        cout<<"\nTotal is "<<sum;
        cout<<"\nPercentage is "<<perc;
    }
};
int main()
{
    Student obj;
    obj.set_data();
    obj.get_data();

    return 0;
}