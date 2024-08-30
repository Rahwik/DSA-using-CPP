//longest rectangle with all 1's
#include<iostream>
#include<stack>
using namespace std;

int largesthist(int arr[], int n)
{
    stack<int> s;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && arr[s.top()] >= arr[i])
        {
            int top = s.top();
            s.pop();
            int curr = arr[top] * (s.empty() ? i : (i - top - 1));
            res = max(res, curr);
        }
        s.push(i);
    }
    while (!s.empty())
    {
        int top = s.top();
        s.pop();
        int curr = arr[top] * (s.empty() ? n : (n - top - 1));
        res = max(res, curr);
    }
    return res;
}

int maxrectangle(int mat[][c], int r, int c)
{
    int res = largesthist(mat[0], c);
    for (int i = 1; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (mat[i][j] == 1)
            {
                mat[i][j] += mat[i - 1][j];
            }
        }
        res = max(res, largesthist(mat[i], c));
    }
    return res;
}

int main()
{
    int r, c;
    cout << "Enter the number of rows: ";
    cin >> r;
    cout << "Enter the number of columns: ";
    cin >> c;

    int mat[r][10];

    cout << "Enter the matrix elements (0/1): " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> mat[i][j];
        }
    }

    int result = maxrectangle(mat, r, c);
    cout << "The area of the largest rectangle with all 1's is: " << result << endl;

    return 0;
}