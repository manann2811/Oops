#include<iostream>
using namespace std;
 
int main()
{
    int i, j, n, m;
 
    cout << "\nEnter the Number of Rows and Columns of Matrix A and B:";
    cin >> n >> m;
    cout << "\nEnter the Elements of Matrix A: \n";
    int *a = new int[n];
    int *b = new int[n];
    int *c = new int[n];
    int *d = new int[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
        b[i] = new int[m];
        c[i] = new int[m];
        d[i] = new int[m];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "\nEnter the Elements of Matrix B: \n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++ )
        {
            cin >> b[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m ; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            d[i][j] = a[i][j] - b[i][j];
        }
    }
    cout << "\nThe Resultant Matrix C=A+B is :\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++ )
        {
            cout << c[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n The Resultant Matrix D=A-B is : \n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++ )
        {
            cout << d[i][j] << " ";
        }
        cout << "\n";
    }
 
}