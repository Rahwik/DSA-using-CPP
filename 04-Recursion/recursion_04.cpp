<<<<<<< HEAD
//print 1 to n
#include <iostream>
using namespace std;
void fun(int n)
{
    if(n==0)
    return;
fun(n-1);
cout<<n<<" ";    
}
int main()
{
    int n=4;
    fun(n);
    return 0;
=======
//print 1 to n
#include <iostream>
using namespace std;
void fun(int n)
{
    if(n==0)
    return;
fun(n-1);
cout<<n<<" ";    
}
int main()
{
    int n=4;
    fun(n);
    return 0;
>>>>>>> origin/main
}