#include <iostream>
using namespace std;
class A
{
  public:
  int a;
};
class B:public A
{
  public:
  B()
  {
      cout<<"\nEnter a : ";
      cin>>a;
  }
};
class C
{
  public:
  int c;
  C()
  {
      cout<<"\nEnter c : ";
      cin>>c;
  }
};
class D :public B , public C
{
    public:
    void sum()
    {
        cout<<"\nSUM : "<< a+c;
    }
};
int main()
{
    cout<<"Hybrid Inheritance\n";
    D d;
    d.sum();
    return 0;
}
