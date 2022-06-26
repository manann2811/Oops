#include <iostream>
#include <vector>
using namespace std;
void show(vector<int> &v)
{
     for (int i = 0; i < v.size(); i++)
     {
          cout << v[i];
          cout << "\n";
     }
     cout << "\n";
}
int main()
{
     vector<int> v;
     cout << "initial size = " << v.size() << endl;
     int a;
     cout << "Enter 3 elements in an array : ";
     for (int i = 0; i < 3; i++)
     {

          cin >> a;

          v.push_back(a);
     }
     cout << "\nSize after adding = " << v.size() << "\n";
     cout << "Current Vector"<<endl;
     show(v);
     return 0;
}
