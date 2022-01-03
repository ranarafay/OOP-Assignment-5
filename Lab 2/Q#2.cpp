#include <iostream>
using namespace std;

int main()
{
    // taking matrix of 3x3
    int mat[3][3];

    // taking the inputs from user
    cout << "Enter the values for initializing 2D matirix: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << i << " x " << j << ":" << endl;
            cin >> mat[i][j];
        }
    }

    // printing matrix
    cout << "Matrix : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }

    // applying condition for checking by indexing the 2D array
    // printing result
    if (mat [0][1] == 0 && mat [0][2] == 0 && mat [1][2] == 0)
    {
        cout << "Matrix is upper diagonal!" << endl;
    }
    
    if (mat [1][0] == 0 && mat [2][0] == 0 && mat [2][1] == 0)
    {
        cout << "Matrix is lower diagonal!" << endl;
    }
    
    return 0;
}