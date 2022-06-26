#include<iostream>
using namespace std;
class Sum{
    int num1, num2, add;
    public:
    void get_data(){
        cout<<"Enter Number 1 : ";
        cin>>num1;
        cout<<"Enter Number 2 : ";
        cin>>num2;
    }
    friend void add(Sum &obj);
    void print_sum(){
    cout<<"The Sum is : "<<add;
    }
};
void add(Sum &obj){
    obj.add = obj.num1 + obj.num2;
}

int main(){
   Sum obj;
   obj.get_data();
   add(obj);
   obj.print_sum();
   return 0;
}