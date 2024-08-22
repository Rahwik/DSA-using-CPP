//Generate Subsets
#include <iostream>
#include <string.h>
using namespace std;

void subsets(string s, string curr = " ", int i = 0)
{
    if (i == s.length())
    {
        cout << curr << endl;
        return;
    }

    subsets(s, curr, i + 1);
    subsets(s, curr + s[i], i + 1);
}

int main()
{
    string input;
    cout << "Enter a string: ";
    cin >> input;

    cout << "Subsets of the string are:" << endl;
    subsets(input);

    return 0;
}
