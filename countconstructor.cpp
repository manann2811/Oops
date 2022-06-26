#include <iostream>
#include<conio.h>
using namespace std;
class Demo
{
  public:
  static int objcount;
  Demo ()
  { 
    objcount++;
    cout << "\nConstructor called ";
    cout<<objcount;
  }
   ~Demo ()
  {
      cout << "\nDestructor called ";
    cout<<objcount;
    objcount--;
  }
  int fun()
  {
      int a = 20;
      cout<<"\n fun() function is called: "<<a;
  }
};
int Demo::objcount=0;
int main ()
{
    Demo obj1,obj2,obj3;
    {
        Demo obj4;
        obj4.fun();
    }
      return 0;
}