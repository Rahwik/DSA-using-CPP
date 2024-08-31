//Set in C++ STL
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int,greater<int>>s;//Decresing order
    s.insert(10);
    s.insert(1);
    s.insert(5);
    s.insert(4);
    s.insert(201);
    s.insert(54);
    s.insert(42);
    s.insert(443);
    s.insert(23);
    for(int x:s)
    {
        cout<<x<<" ";
    }
    return 0;
}