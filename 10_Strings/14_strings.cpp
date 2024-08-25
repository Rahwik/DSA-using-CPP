//Anagram Search
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const int CHAR = 256;

bool areAnagramNaive(string &s1, string& s2)
{
    if(s1.length()!=s2.length())
    {
        return false;
    }
    string temp1 = s1;
    string temp2 = s2;
    sort(temp1.begin(),temp1.end());
    sort(temp2.begin(),temp2.end());
    return temp1==temp2;
}

bool areAnagramEfficient(string &s1, string& s2)
{
    if(s1.length()!=s2.length())
    {
        return false;
    }
    int count[CHAR]={0};
    for(int i=0;i<s1.length();i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0;i<CHAR;i++)
    {
        if(count[i]!=0)
        {
            return false;
        }
    }
    return true;
}

void searchAnagram(string &text, string &pattern)
{
    int textLen = text.length();
    int patternLen = pattern.length();

    for(int i=0;i<=textLen-patternLen;i++)
    {
        string temp = text.substr(i,patternLen);
        if(areAnagramEfficient(temp,pattern))
        {
            cout << "Anagram found at index " << i << endl;
        }
    }
}

int main()
{
    string text, pattern;
    cout << "Enter text: ";
    cin >> text;
    cout << "Enter pattern: ";
    cin >> pattern;

    searchAnagram(text, pattern);

    return 0;
}