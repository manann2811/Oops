#include <iostream>
#include<math.h>

using namespace std;
class Find_Area
{
public:
  int res;
  int s;

  int area (int r)
  {
    cout << "\nEnter the radius of circle:";
    cin >> r;
    res = 3.14 * r * r;
    cout << "Area of circle : "<<res<<endl;
  }
  int area (int a, int b)
  {
    cout<<"\nEnter the length breadth: ";
    cin>>a>>b;
    res = a * b;
    cout<<"Area of rectangle : "<<res<<endl;
  }
  int area (int x, int y, int z)
  {
    cout << "\nEnter the three sides: ";
    cin >> x >> y >> z;
    s = (x + y + z) / 2;
    res = sqrt (s * (s - x) * (s - y) * (s - z));
    cout << "Area of triangle : " << res<<endl;

  }
};

int main ()
{
  Find_Area obj;
  int r, a, b, x, y, z;
  obj.area (r);
  obj.area (a, b);
  obj.area (x, y, z);
  return 0;
}