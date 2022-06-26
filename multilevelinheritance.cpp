#include<iostream>
using namespace std;

class mammal{
    public:
    void get_input()
    {
        cout<<"Animals";
    }
};
class animal : public mammal
{
    public:
    string animal_name;
    void display_data()
    {
        cout<<"\nEnter the name of animal : ";
        cin>>animal_name;
    }
};
class cat : public animal
{
    public:
    string colour;
    void get_data()
    {
        cout<<"Enter the colour of animal : ";
        cin>>colour;
    }

    void print_data()
    {
        cout<<"\nAnimal name is : "<<animal_name;
        cout<<"\nColour of animal is : "<<colour;
    }
};
int main()
{
    cat obj;
    obj.get_input();
    obj.display_data();
    obj.get_data();
    obj.print_data();
    return 0;
}