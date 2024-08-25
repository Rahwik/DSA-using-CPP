//left most non-repeating characters
#include <iostream>
#include <climits>
using namespace std;

// Naive Solution
int nonpep(string& str)
{
    for(int i=0;i<str.length();i++)
    {
        bool flag = false;
        for(int j=i+1;j<str.length();j++)
        {
            if(i!=j&&str[i]==str[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
        {
            return i;
        }
    }
    return -1;
}

// Better Solution
const int CHAR = 256;
int nonPep(string& str)
{
    int count[CHAR]={0};
    for(int i=0;i<str.length();i++)
    {
        count[str[i]]++;
    }
    for(int i=0;i<str.length();i++)
    {
        if(count[str[i]]==1)
        return i;
    }
    return -1;
}

// Efficient Solution
const int Char=256;
int nonPeP(string& str)
{
    int f1[Char];
    fill(f1,f1+Char, -1);
    for(int i=0;i<str.length();i++)
    {
        if(f1[str[i]]==-1)
        {
            f1[str[i]]=i;
        }
        else{
            f1[str[i]]=-2;
        }
    }
    int res = INT_MAX;
    for(int i=0;i<Char;i++)
    {
        if(f1[i]>=0)
        {
            res = min(res,f1[i]);
        }
    }
    return (res==INT_MAX?-1:res);
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Leftmost non-repeating character (Naive Solution): " << nonpep(str) << endl;
    cout << "Leftmost non-repeating character (Better Solution): " << nonPep(str) << endl;
    cout << "Leftmost non-repeating character (Efficient Solution): " << nonPeP(str) << endl;
    return 0;
}