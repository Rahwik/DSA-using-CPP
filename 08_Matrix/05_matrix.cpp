//Print a Matrix in Snake Problem
#include<iostream>
using namespace std;

void printsnake(int mat[][100], int r, int c) 
{
    for(int i=0; i<r; i++)
    {
        if(i%2==0)
        {
            for(int j=0; j<c; j++)
            {
                cout << mat[i][j] << " ";
            }
        }
        else{
            for(int j=c-1; j>=0; j--)
            {
                cout << mat[i][j] << " ";
            }
        }
        cout << endl; 
    }
}

int main()
{
    int r, c;
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;

    int mat[100][100];
    cout << "Enter matrix elements: ";
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin >> mat[i][j];
        }
    }

    printsnake(mat, r, c);

    return 0;
}