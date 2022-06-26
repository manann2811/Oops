#include <iostream>
using namespace std;
template <class t1 , class t2>
void Swap(t1 &a, t1 &b, t2 &c ,t2 &d)
{
    t1 Temp;
    Temp = a;
    a = b;
    b = Temp;
    t2 temp;
    temp=c;
    c=d;
    d=temp;
}
void display(int a,int b, float c, float d)
{
    cout << "Before swapping" << endl;
    cout << "First integer value is : " << a << endl;
    cout << "Second integer value is : " << b << endl;
    cout << "First float value is : " << c << endl;
    cout << "Second float value is : " << d << endl;
    Swap(a,b,c,d);
    cout << "After swapping" << endl;
    

    cout << "First integer value is : " << a << endl;
    cout << "Second integer value is : " << b << endl;
    cout << "First float value is : " << c << endl;
    cout << "Second float value is : " << d << endl;
}
int main()
{
    display(3,5,4.4,5.6);
    return 0;
}
