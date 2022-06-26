#include<iostream>
using namespace std;

class oralexam
{
    public:
    int oral_marks;
    void oral_input()
    {
        cout<<"Enter marks in oral exams out of 50: ";
        cin>>oral_marks;
    }
};
class writtenexam
{
    public:
    int written_marks;
    void written_input()
    {
        cout<<"Enter marks in written exam out of 50: ";
        cin>>written_marks;
    }
};
class result : public oralexam, public writtenexam
{
    public:
    int total_marks;
    void set_total()
    {
        total_marks = oral_marks + written_marks;
        cout<<"Total marks : "<<total_marks;
    }
    void print_result()
    {
        cout<<"\n\nResult of the Student :"<<endl;
        cout<<"\nMarks in oral Exam out of 50: "<<oral_marks;
        cout<<"\nMarks in written exam out of 50: "<<written_marks;
        cout<<"\nTotal marks out of 100: "<<total_marks;
    }
};
int main()
{
    result obj;
    obj.oral_input();
    obj.written_input();
    obj.set_total();
    obj.print_result();
    return 0;
}