// check if a string is subsequence of other
#include <iostream>
#include <string>

using namespace std;

// Iterative solution
bool insubseq(string s1, string s2, int n, int m)
{
    int j = 0;
    for (int i = 0; i < n && j < m; i++)
    {
        if (s1[i] == s2[j])
        {
            j++;
        }
    }
    return (j == m);
}

// Recursive solution
bool insubseqRec(string s1, string s2, int n, int m)
{
    if (m == 0)
    {
        return true;
    }
    if (n == 0)
    {
        return false;
    }
    if (s1[n - 1] == s2[m - 1])
    {
        return insubseqRec(s1, s2, n - 1, m - 1);
    }
    else
    {
        return insubseqRec(s1, s2, n - 1, m);
    }
}

int main()
{
    string s1, s2;
    cout << "Enter the first string: ";
    cin >> s1;
    cout << "Enter the second string: ";
    cin >> s2;

    int n = s1.length();
    int m = s2.length();

    bool iterativeResult = insubseq(s1, s2, n, m);
    bool recursiveResult = insubseqRec(s1, s2, n, m);

    cout << "Iterative result: ";
    if (iterativeResult)
    {
        cout << "The second string is a subsequence of the first string." << endl;
    }
    else
    {
        cout << "The second string is not a subsequence of the first string." << endl;
    }

    cout << "Recursive result: ";
    if (recursiveResult)
    {
        cout << "The second string is a subsequence of the first string." << endl;
    }
    else
    {
        cout << "The second string is not a subsequence of the first string." << endl;
    }

    return 0;
}