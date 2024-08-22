//Power Set Using Bitwise:
#include<iostream>
#include<cmath>
using namespace std;

void powerSet(string str)
{
    int n = str.length();
    int powsize = pow(2, n);
    
    for (int counter = 0; counter < powsize; counter++)
    {
        for (int j = 0; j < n; j++)
        {
            if (counter & (1 << j) != 0)
            {
                cout << str[j] << " ";
            }
        }
        cout << "\n";
    }
}

int main()
{
    string inputStr;
    cout << "Enter a string: ";
    cin >> inputStr;

    cout << "Power set of the string is: \n";
    powerSet(inputStr);

    return 0;
}

