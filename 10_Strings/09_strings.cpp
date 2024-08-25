#include <iostream>
#include <string>
using namespace std;

//Overview of pattern searching
//Naive Pattern Searching
void patSearching(string &txt, string &pat)
{
    int m = pat.length();
    int n = txt.length();
    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (pat[j] != txt[i + j])
            {
                break;
            }
        }
        if (j == m)
        {
            cout << i << " ";
        }
    }
}

//Improved Naive Algorithm for Distinct (in pattern)
//shifts after mismatch is encountered
void patSearch(string &txt, string &pat)
{
    int n = txt.length();
    int m = pat.length();
    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (pat[j] != txt[i + j])
            {
                break;
            }
        }
        if (j == m)
        {
            cout << i << " ";
        }
        if (j == 0)
        {
            i++;
        }
        else
        {
            i = i + j;
        }
    }
}

int main()
{
    string txt, pat;
    cout << "Enter the text: ";
    getline(cin, txt);
    cout << "Enter the pattern: ";
    getline(cin, pat);
    cout << "Naive Pattern Searching: ";
    patSearching(txt, pat);
    cout << "\nImproved Naive Pattern Searching: ";
    patSearch(txt, pat);
    return 0;
}