#include <iostream>
using namespace std;

class matrix
{
    int **a;
public:
    matrix ()
    {
        int i, j;
        a = new int *[2];
        for (i = 0; i < 2; i++)
            a[i] = new int[2];
        cout << "\nEnter elements for a 2x2 matrix:\n";
        for (i = 0; i < 2; i++)
            for (j = 0; j < 2; j++)
                cin >> a[i][j];
    }

    void putmatrix ();
    friend void add (matrix, matrix);
    friend void sub (matrix, matrix);
};

void matrix::putmatrix()
{
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

void add(matrix m1, matrix m2)
{
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            cout << m1.a[i][j] + m2.a[i][j] << " ";
        cout << endl;
    }
}

void sub(matrix m1, matrix m2)
{
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            cout << m1.a[i][j] - m2.a[i][j] << " ";
        cout << endl;
    }
}

int main ()
{
    matrix obj1;
    matrix obj2;
    cout<<"\n";
    cout << "***Matrix 1 :\n";
    obj1.putmatrix();
    cout << "***Matrix 2 :\n";
    obj2.putmatrix();

    cout << "\n\n->->-> Addition of the Matrices :\n";
    add(obj1, obj2);
    cout << "\n->->-> Subtraction of the Matrices :\n";
    sub(obj1, obj2);
    cout<<"\n\n";

    return 0;
}


