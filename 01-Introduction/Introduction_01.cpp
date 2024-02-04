#include<iostream>
using namespace std;
int fun1(int n)
{
    return(n*(n+1))/2;//constant 3 operstors for any n->c1
}
int fun2(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)//performs C2n+C3
    {
        sum=sum+i;
    }
return sum;
}
int fun3(int n)
{
    int sum=0;
    for(int i=0;i<=n;i++)/* perform quadratic equation  C4n^2 + C5n + C6*/
    {
        for(int j=0;j<=i;j++)
        {
            sum++;
        }
    }//1 + (1+1) + (1+1+1) + .........
    return sum;
}
int main()
{
    int n=10;
    int sum1=fun1(n);
    int sum2=fun2(n);
    int sum3=fun3(n);
    cout<<sum1<<sum2<<sum3<<endl;
    return 0;
}