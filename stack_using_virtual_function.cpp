#include<iostream>
using namespace std;
#define SIZE 5
class stack
{
public:
    int item,i;
    int s[SIZE];
    int top;
    stack()
    {
        top=0;
    }
    virtual void push()
    {
        if(top==SIZE)
        {
            cout<<"Stack is FULL";
        }
        else
        {
            cout<<"\nEnter the value:";
            cin>>item;
            cout<<"\nPosition:"<<top<<",pushed value :"<<item<<" ";
            s[top++]=item;
        }
    }
    virtual void pop()
    {
        if(top==0)
        {
            cout<<"Stack is Empty";
        }
        else
        {
            --top;
            cout<<"\nPosition:"<<top<<",popped value :"<<s[top]<<" ";
        }
    }
    virtual void display()
    {
        for(i=top-1;i>=0;i--)
        {
            cout<<s[i];
        }
    }
};
class derived:public stack
{
    public:
    int item,i,top;
    int s[SIZE];
    derived()
    {
        top=0;
    }
    void push()
    {
        if(top==SIZE)
        {
            cout<<"Stack is FULL";
        }
        else
        {
            cout<<"\nEnter the value:";
            cin>>item;
            cout<<"\nPosition:"<<top<<",pushed value :"<<item<<" ";
            s[top++]=item;
        }
    }
    void pop()
    {
        if(top==0)
        {
            cout<<"Stack is Empty";
        }
        else
        {
            --top;
            cout<<"\nPosition:"<<top<<",popped value :"<<s[top]<<" ";
        }
    }
    void display()
    {
        for(i=top-1;i>=0;i--)
        {
            cout<<s[i]<<" ";
        }
    }
};
int main()
{
    stack *s;
    derived d;
    s=&d;
    s->push();
    s->push();
    s->push();
    s->display();
    s->pop();
    s->display();
    return 0;
}
