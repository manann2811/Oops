#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter three numbers: "<<endl;
    cin>>a>>b>>c;
    if (a>b){
        if (a>c){
            cout<<"Largest No. is: "<<a<<endl;
            }
        else{
            cout<<"Largest No. is: "<<c<<endl;
            }
        }
    else if (b>c){
        if (b>a){
            cout<<"Largest No. is: "<<b<<endl;
            }
        else{
            cout<<"Largest No. is: "<<a<<endl;
            }
        }
    else if (c>a){
        if (c>b){
            cout<<"Largest No. is: "<<c<<endl;
            }
        else{
            cout<<"Largest No. is: "<<b<<endl;
            }
        }

    return 0;
    }   
