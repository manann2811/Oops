#include <iostream>
using namespace std;

class objectCount
{
public:
    static int count;
    static int dis_count;

public:
    objectCount ()
    {
        count++;
    }

    ~objectCount ()
    {
        dis_count++;
    }
};

int objectCount::count = 0;
int objectCount::dis_count = 0;


int main ()
{
    objectCount obj1;
    {
        objectCount obj2, obj3;
    }
    objectCount obj4, obj5;
    cout << "\nObject created: " << obj1.count << endl;
    cout << "\nObject destroyed till now: " << obj1.dis_count << "\n\n"
         << endl;

    return 0;
}
