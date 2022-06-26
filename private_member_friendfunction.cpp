#include <iostream>
using namespace std;
class Test
{
private:
    int x, y, z;

public:
    void input()
    {   cout << "\n\nEnter two numbers: ";
        cin >> x >> y;
    }
    friend void add(Test &t);
    void display()
    {   cout << "\nSum is: " << z;
        cout<<"\n\n";
    }
};
void add(Test &t)
{   t.z = t.x + t.y;
}
int main ()
{
    Test t;
    t.input();
    add(t);
    t.display();
    return 0;
}
