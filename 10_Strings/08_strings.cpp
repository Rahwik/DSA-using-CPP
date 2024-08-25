//Reverse words in A string
#include <iostream>
#include<cstring>

using namespace std;

void reverse(char str[], int low, int high)
{
    while(low <= high)
    {
        swap(str[low], str[high]);
        low++;
        high--;
    }
}

void reversewords(char str[], int n)
{
    int start = 0;
    for(int end = 0; end < n; end++)
    {
        if(str[end] == ' ')
        {
            reverse(str, start, end - 1);
            start = end + 1;
        }
    }
    reverse(str, start, n - 1);
    reverse(str, 0, n - 1);
}

int main()
{
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    int n = strlen(str);
    reversewords(str, n);
    cout << "Reversed words in the string: " << str << endl;
    return 0;
}