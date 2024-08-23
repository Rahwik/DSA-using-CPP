//vector of vector
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int m=3,n=2;
  vector<vector<int>>arr;
  for(int i=0;i<m;i++)
  {
    vector<int>row;
    for(int j=0;j<n;j++)
    {
        row.push_back(i+j);
    }
    arr.push_back(row);
  }
  for(int i=0;i<arr.size();i++)
  {
    for(int j=0;j<arr[i].size();j++)
    {
        cout<<arr[i][j]<<" ";
    }
  }
  return 0;
}