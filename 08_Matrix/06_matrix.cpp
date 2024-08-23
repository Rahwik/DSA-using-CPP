//Print border Eleemnts
#include<iostream>
using namespace std;

void btravesal(int mat[], int r, int c)
{
    if(r==1)
    {
        for(int i=0;i<c;i++)
        {
            cout<<mat[i]<<" ";
        }
    }
    else if(c==1)
    {
        for(int i=0;i<r;i++)
        {
            cout<<*(mat+i*c)<<" ";
        }
    }
    else
    {
        for(int i=0;i<c;i++)
        {
            cout<<mat[i]<<" ";
        }
        for(int i=1;i<r-1;i++)
        {
            cout<<*(mat+i*c+c-1)<<" ";
        }
        for(int i=c-1;i>=0;i--)
        {
            cout<<*(mat+(r-1)*c+i)<<" ";
        }
        for(int i=r-2;i>=1;i--)
        {
            cout<<*(mat+i*c)<<" ";
        }
    }
}

int main()
{
    int r, c;
    cin>>r>>c;
    int mat[r*c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>mat[i*c+j];
        }
    }
    btravesal(mat, r, c);
    return 0;
}