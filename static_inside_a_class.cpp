#include<iostream>
using namespace std;
class room
{
    public:
   void sum(int r,int c)
   {
       int m1[r][c],m2[r][c],s[r][c];
       cout<<"Enter the elements of first matrix:";
       for(int i=0;i<r;i++)
       {
           for(int j=0;j<c;j++){
               cin>>m1[i][j];
           }
       }
       cout<<"Enter the elements of second matrix:";
       for(int i=0;i<r;i++)
       {
           for(int j=0;j<c;j++){
               cin>>m2[i][j];
           }
       }
       for(int i=0;i<r;i++)
       {
           for(int j=0;j<c;j++){
               s[i][j]=m1[i][j]+m2[i][j];
           }
       }
       cout<<"*** Addition of matrix ***: \n";
       for(int i=0;i<r;i++)
       {
           for(int j=0;j<c;j++){
               cout<<s[i][j]<<" ";
               if(j==c-1)
               cout<<endl;
           }
       }

   }
   void diff(int r,int c){
       int m1[r][c],m2[r][c],d[r][c];
       cout<<"Enter the elements of first matrix:";
       for(int i=0;i<r;i++)
       {
           for(int j=0;j<c;j++){
               cin>>m1[i][j];
           }
       }
       cout<<"Enter the elements of second matrix:";
       for(int i=0;i<r;i++)
       {
           for(int j=0;j<c;j++){
               cin>>m2[i][j];
           }
       }
       for(int i=0;i<r;i++)
       {
           for(int j=0;j<c;j++){
               d[i][j]=m1[i][j]-m2[i][j];
           }
       }
       cout<<"*** Difference of matrix ***:\n";
       for(int i=0;i<r;i++)
       {
           for(int j=0;j<c;j++){
               cout<<d[i][j]<<" ";
               if(j==c-1)
               cout<<endl;
           }
       }
   }
};
int main(){
    int row,col;
    cout<<"Enter no of rows and column :";
    cin>>row>>col;
    room *ptr=new room;
    ptr->sum(row,col);
    ptr->diff(row,col);
    delete ptr;
    return 0;
}

