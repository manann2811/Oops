#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
class Nominee_details
{
public:
     fstream file;
    string name,s1,bod,Aadhar,Mobile,Address,pin;
   Nominee_details()
    {
            cout<<"\nFill these details:";
            cout<<"\nName : ";
            getline(cin,name);
            cout<<"Birth date : ";
            getline(cin,bod);
            cout<<"Mobile no : ";
            getline(cin,Mobile);
            cout<<"Identity no : ";
            getline(cin,Aadhar);
            cout<<"Address : ";
            getline(cin,Address);
            cout<<"Pincode : ";
            getline(cin,pin);
            fstream file;
            file.open("bank123.txt",ios::out);
           if(!file)
           {
            cout<<"error"<<endl;
            //return 0;
           }
                 file<<"\n----------------------------------------\n";
                 file<<"\n----------Personal details--------------\n";
                 file<<"\nName : "<<name;
                 file<<"\nBirth Date : "<<bod;
                 file<<"\nIdentity no. : "<<Aadhar;
                 file<<"\nMobile no. : "<<Mobile;
                 file<<"\nAddress : "<<Address;
                 file<<"\nPincode. : "<<pin;
                 file.close();
               }
};
int main()
{
    Nominee_details obj;
    return 0;
}
