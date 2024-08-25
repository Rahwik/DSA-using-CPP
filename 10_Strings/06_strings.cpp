//leftmost repeating character
#include <iostream>
#include <climits>
#include <cstring>

using namespace std;

const int CHAR = 256;

//Naive Solution
int leftMostNaive(string& str)
{
    for(int i=0;i<str.length();i++)
    {
        for(int j=i+1;j<str.length();j++)
        {
            if(str[i]==str[j])
            {
                return i;
            }
        }
    }
    return -1;
}

//Efficient Solution -1
int leftMostEfficient1(string& str)
{
    int findex[CHAR];
    fill(findex,findex+CHAR,-1);
    int res=INT_MAX;
    for(int i=0;i<str.length();i++)
    {
        int fi = findex[str[i]];
        if(fi==-1)
        {
            findex[str[i]]=i;
        }
        else{
            res=min(res,fi);
        }
    }
    return(res==INT_MAX)?-1:res;
}

//Efficient Solution -2
int leftMostEfficient2(string& str)
{
    bool visited[CHAR];
    fill(visited,visited+CHAR,false);
    int res=-1;
    for(int i=str.length()-1;i>=0;i--)
    {
        if(visited[str[i]])
        {
            res=i;
        }
        else{
            visited[str[i]]=true;
        }
    }
    return res;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Leftmost repeating character (Naive): " << leftMostNaive(str) << endl;
    cout << "Leftmost repeating character (Efficient 1): " << leftMostEfficient1(str) << endl;
    cout << "Leftmost repeating character (Efficient 2): " << leftMostEfficient2(str) << endl;
    return 0;
}