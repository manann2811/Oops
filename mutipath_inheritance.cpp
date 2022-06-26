#include<iostream>
using namespace std;
class parallelogram
{
public:
    int s;
    void input()
    {
        cout<<"Enter parallel side of parallelogram:";
        cin>>s;
    }
};
class square:virtual public parallelogram
{
public:
    int side;
    int a;
    void area()
    {
        cout<<"Enter side of square:";
        cin>>side;
        a=side*side;
    }
    void show()
    {
        cout<<"Area of square is "<<a;
    }
};
class rhombus:virtual public parallelogram
{
public:
    rhombus()
    {
        cout<<"Rhombus is a quadrilateral whose 4 sides have same length"<<endl;
    }
};
class quadrilateral:public square,public rhombus
{
public:
    quadrilateral()
    {
        cout<<"Parallelogram , square , rhombus are quadrilateral"<<endl;
    }
};
int main()
{
    cout<<"***MULTIPATH INHERITANCE***"<<endl;
    quadrilateral q;
    q.input();
    q.area();
    q.show();
}
