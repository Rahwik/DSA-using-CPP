//check for Anagram
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// Naive Solution
bool areAnagramNaive(string &s1, string& s2)
{
    if(s1.length()!=s2.length())
    {
        return false;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return s1==s2;
}

// Efficient solution
const int CHAR = 256;
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

int main()
{
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    bool resultNaive = areAnagramNaive(s1, s2);
    bool resultEfficient = areAnagramEfficient(s1, s2);

    cout << "Naive Solution: ";
    if(resultNaive)
        cout << "The strings are anagrams." << endl;
    else
        cout << "The strings are not anagrams." << endl;

    cout << "Efficient Solution: ";
    if(resultEfficient)
        cout << "The strings are anagrams." << endl;
    else
        cout << "The strings are not anagrams." << endl;

    return 0;
}