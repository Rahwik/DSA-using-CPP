// Generate numbers with given digits
#include <iostream>
#include <queue>
#include <string>

using namespace std;

void printfirstN(int n)
{
    queue<string> q;
    q.push("5");
    q.push("6");
    for (int count = 0; count < n; count++)
    {
        string curr = q.front();
        cout << curr << " ";
        q.pop();
        q.push(curr + "5");
        q.push(curr + "6");
    }
}
int main()
{
    int n;
    cout << "Enter the number of numbers to generate: ";
    cin >> n;
    printfirstN(n);
    return 0;
}