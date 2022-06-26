#include <iostream>
using namespace std;
class Student{
    public:
    
    string name;
    int rollno;
    
    void read_data(){
        cout<<"Name is : ";
        cin>>name;
        cout<<"Roll no is : ";
        cin>>rollno;
        }
        
        void print_data();                                                                             
    };
    
    void Student::print_data(){
        cout<<"Student name is : "<<name<<" and Roll no is : "<<rollno<<endl;
    }
    
    int main(){
        Student obj1;   
        obj1.read_data();
        obj1.print_data();
        return 0;
}       
