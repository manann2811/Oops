#include <iostream>
using namespace std;

int largenum(int a, int b, int c)
{
    if (a>b && a>c)
    {
        cout<<"Largest no. is :"<<a<<endl;
    }

    else if (b>a && b>c)
    {
        cout<<"Largest no. is :"<<b<<endl;
    }

    else if (c>a && c>b)
    {
        cout<<"Largest no. is :"<<c<<endl;
    }
}

int main()
{
    int l, m, n;
    cout<<"Enter three numbers :"<<endl;
    cin>>l>>m>>n;
    largenum(l, m, n);
    return 0;
}
