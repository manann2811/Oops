#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
   vector<int> v = { 1, 1,2,3,5 };
   vector<int>::iterator itr1 = v.begin();
   vector<int>::iterator itr2 = v.end();
  auto it = next(itr1, 2);
   cout << "Using next() the new iterator is at: ";
   cout << *it << " ";
   cout << endl;
  auto it1 = prev(itr2, 2);
   cout << "The position of new iterator using prev() is: ";
   cout << *it1 << " ";
   cout << endl;
   advance(itr1,3);
   cout << "After advance operation,itr1 is positioned at: ";
   cout << *itr1 << " ";
   cout << endl;
   return 0;
}
