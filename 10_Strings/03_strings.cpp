//palindrome check
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//Naive solution
bool ispal_naive(string &str)
{
    string rev=str;
    reverse(rev.begin(),rev.end());
    return(rev==str);
}

//Efficient solution
bool ispal_efficient(string &str)
{
    int begin=0;
    int end=str.length()-1;
    while(begin<end)
    {
        if(str[begin]!=str[end])
        {
            return false;
        }
        begin++;
        end--;
    }
    return true;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if(ispal_naive(str))
        cout << "Naive solution: The string is a palindrome." << endl;
    else
        cout << "Naive solution: The string is not a palindrome." << endl;

    if(ispal_efficient(str))
        cout << "Efficient solution: The string is a palindrome." << endl;
    else
        cout << "Efficient solution: The string is not a palindrome." << endl;

    return 0;
}