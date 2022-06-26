#include<iostream>
using namespace std;
 
class NUM
{
    private:
    int a,b;
         
    public:
        void input()
        {
            cout<<"Enter the value of a and b : ";
            cin>>a>>b;
        }
        void operator ++()
        {
            ++a;
            ++b;
        }
        void operator ++(int)
        {
            a++;
            b++;
        }
        void operator --()
        {
            --a;
            --b;
        }
        void operator --(int)
        {
            a--;
            b--;
        }
        void display()
        {
            cout<<a<<" and "<<b;
        }
};
int main()
{
    NUM num;
    num.input();

    
    ++num;
    cout<<"\nPre increment : ";
    num.display();

    num++;
    cout<<"\nPost increment : ";
    num.display();

    --num;
    cout<<"\nPre decrement : ";
    num.display();
    
    num--;
    cout<<"\nPost decrement : ";
    num.display(); 

    return 0;
}