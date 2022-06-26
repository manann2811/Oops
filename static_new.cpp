#include <iostream>
using namespace std;

class room
{
    int i;
public:
    room()
    {    i = 0;
        cout << "\n\nConstructor";
    }
    ~room()
    {
        cout << "Destructor\n\n";
    }
};
void abc()
{
    static room obj;
}

int main()
{   abc ();
    cout << "\n\nEND\n\n";
}
