#include <iostream>
using namespace std;
class increment
{
    public:
        int n;
    void get()
    {
        cout<<"enter any number: ";
        cin>>n;
    }
    void operator ++()
    {

        ++n;
    }
    void operator ++(int)
    {
        n++;
    }
    void operator --()
    {
        --n;
    }
    void operator --(int)
    {
        n--;
    }
    void display()
    {

        cout<<"\n n--> "<<n;
    }
};

int main()
{

    increment i;
    i.get();
    i++;
    i.display();
    ++i;
    i.display();
    i--;
    i.display();
    --i;
    i.display();
    return 0;
}
