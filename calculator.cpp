#include<iostream>
#include<math.h>
using namespace std;


void add(int n1, int n2)
{
    int result = n1 + n2;
    cout << "Addition is : " << result<<endl;
}
void  subtract(int n1, int n2)
{
    int result = n1 - n2;
    cout << "Subtraction is : " << result<<endl;
}
void  multiple(int n1, int n2)
{
    int result = n1 * n2;
    cout << "Multiplication is : " << result<<endl;
}
void  division(int n1, int n2)
{
    int result = n1 / n2;
    cout <<"Division is : " << result<<endl;
}
void  square1(int n1)
{
    int result1 = sqrt(n1);
    cout<<"Squareroot of "<<n1<<" : "<<result1<<endl;    
}

void  square2(int n2)
{ 
    int result2 = sqrt(n2);
    cout<<"Squareroot of "<<n2<<" : "<<result2<<endl;   
}
       

void power(int n1, int n2)
{
    int result = pow(n1, n2);   
    cout<<"Power is : "<<result<<endl;
}

int main()
{
    int n1, n2;
    cout<<"Enter two numbers : ";
    cin>>n1>>n2;    
    add(n1, n2);
    subtract(n1, n2);
    multiple(n1, n2);
    division(n1, n2);
    square1(n1);
    square2(n2);
    power(n1, n2);      
    return 0;
}
