#include<iostream>
using namespace std; 
void fun()
{
    static int count=0;
    count = count+2;
    cout<<"\n"<<count;
}
int main()
{
    for (int i=0; i<10; i++)
    {
           fun(); 
    }
    return 0;
}