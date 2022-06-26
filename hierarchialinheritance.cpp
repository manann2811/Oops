#include<iostream>
using namespace std;
class sports
{
  public:
  string x;
  sports()
  {
      cout<<"\nEnter any sports(hockey,football,cricket):";
      cin>>x;
  }
};
class hockey:public sports
{
  public:
      string y;
  hockey()
  {
      cout<<"\nEnter any 1 equipment used in hockey:";
      cin>>y;
  }
};
class football:public sports
{
  public:
      string z;
  football()
  {
      cout<<"\nEnter any footballer name:";
      cin>>z;
  }
};
class cricket :public sports
{
    public:
        string w;
    cricket()
    {
        cout<<"\nEnter tournament name(cricket):";
        cin>>w;
    }
};
class srfootball :public football
{
  public:
      int  u;
    srfootball()
    {
        cout<<"\nEnter no of players who are senior in team:";
        cin>>u;
    }

};
class jrfootball :public football
{
  public:
      int t;
    jrfootball()
    {
        cout<<"\nEnter no of players who are junior:";
        cin>>t;
    }

};
int main()
{
    cout<<"Hierarchal Inheritance\n";
    hockey h;
    cricket c;
    srfootball s;
    jrfootball j;

    return 0;
}
