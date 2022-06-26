#include <iostream>
using namespace std;

class Vehicle
{
    public:
       int tyre_num ;
    protected:
       int year;
    private:
       string company;
    public:
    void set_data()
    {
        cout<<"\nEnter the company name:";
        cin>>company;
    }
    void get_data()
    {
        cout<<"\nCompany name:"<<company;
    }
};

class Car:public Vehicle
{
    public:
      string colour;
      void set_data1()
    {
        cout<<"\nEnter the number of tyres:";
        cin>>tyre_num;
        cout<<"\nEnter the year of manufacturing:";
        cin>>year;
        cout<<"\nEnter the colour of the car:";
        cin>>colour;
    }
     void get_data1()
    {
        cout<<"\nNumber of tyres:"<<tyre_num;
        cout<<"\nYear of manufacturing:"<<year;
        cout<<"\nColour:"<<colour;
    }
      
      
};

int main ()
{
    Car obj;
    obj.set_data1();
    obj.set_data();
    obj.get_data1();
    obj.get_data();
   
    return 0;
}