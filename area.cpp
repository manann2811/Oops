#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float a, b, c, s, r, area;
    int ch;
    cout<<"1.Area of circle\n";
    cout<<"2.Area of rectangle\n";
    cout<<"3.Area of triangle\n";
    cout<<"Enter your choice : ";
    
    cin>>ch;
    switch(ch){
        case 1:
            cout<<"Enter radius of circle"<<endl;
            cin>>r;
            area = 3.14*r*r;
            cout<<"area = "<<area<<endl;
            break;
        
        case 2:
            cout<<"Enter length and breadth"<<endl;
            cin>>a>>b;
            area =a*b;
            cout<<"area = "<<area<<endl;
            break;
        
        case 3:
            cout<<"Enter the sides of triangle"<<endl;
            cin>>a>>b>>c;
            s = (a+b+c)/2;
            area = sqrt((s)*(s-a)*(s-b)*(s-c));
            cout<<"area = "<<area<<endl;
            break;
        
        default:
        cout<<"Invalid Choice";
        break;
        }
        return 0;   
    }

