#include<iostream>
using namespace std;
template <class t1, class t2>
class calculate
{
public:
    void add(t1 a,t2 b)
    {
        cout<<"Addition of 2 no:"<<a+b<<endl;
    }
    void mul(t1 a,t2 b)
    {
        cout<<"Multiplication of 2 no:"<<a*b<<endl;
    }
    void div(t1 a,t2 b)
    {
        cout<<"Division of 2 no:"<<a/b<<endl;
    }
};

int main()
{
    calculate<int,int>c1;
    

    calculate<float,float>c2;
    c1.add(2,5);
    c1.mul(3,7);
    c1.div(8,2);
    c2.add(2.6,2.5);
    c2.mul(3.5,5.5);
    c2.div(1.5,8.6);
    return 0;
}
