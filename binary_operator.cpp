#include<iostream>
using namespace std;
class room {
public:
    int n1,n2;
    void input() {
        cout << "Enter two complex numbers:";
        cin >>n1>>n2;
    }
    friend room add(room r1 ,room r2);
    void display() {
        cout <<n1<<"+"<<n2<<"i"<<"\n";
    }
};
room add(room r1,room r2) {
    room c;
    int n1,n2;
    c.n1=r1.n1+r2.n1;
    c.n2=r1.n2+r2.n2;
    return(c);
}


int main() {
    room r1,r2,s;
    r1.input();
    r2.input();
    s=add(r1,r2);
    cout<<"entered values:\n";
    r1.display();
    r2.display();
    cout<<"Addition of real and imaginary number:\n";
    s.display();
    return 0;
}

