#include <iostream>
using namespace std;
class college
{
public:
  string name;
  string department;
  void get_data ()
  {
    cout << "\nEnter the name of the college: ";
    cin >> name;
    cout << "\nEnter the department: ";
    cin >> department;
  }
  void set_data ()
  {
    cout << "\nName of the college: " << name;
    cout << "\nDepartment: " << department;
  }


};

class student
{
public:
  string name;
  int rollno;
  string branch;
  int semister;
  college c;

  void get_data1 ()
  {
    c.get_data ();
    cout << "\nEnter the name of the student: ";
    cin >> name;
    cout << "\nEnter the rollno: ";
    cin >> rollno;
    cout << "\nEnter the name of the branch: ";
    cin >> branch;
    cout << "\nEnter the semister: ";
    cin >> semister;

  }
  void set_data1 ()
  {
    cout << "\nName of the student: " << name;
    cout << "\nRollno: " << rollno;
    cout << "\nBranch: " << branch;
    cout << "\nSemister: " << semister;
  }
  void display ()
  {

    c.set_data ();
  }

};

int main ()
{
  student s;
  s.get_data1 ();
  s.display ();
  s.set_data1 ();
  return 0;
}