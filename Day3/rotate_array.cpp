//rotate array by k times
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>rotatearray(vector<int>arr,int n ,int k)
{
  vector<int>temp(n);
  for(int i=0;i<n;i++)
  {
    temp[(i+k)%n]=arr[i];
  }
  return temp;
}

int main()
{
  vector<int>arr={1,2,3,4,5,6,7};
  int k=3;
  int n=arr.size();

  vector<int>ans=rotatearray(arr,n,k);

  for(int i=0;i<n;i++)
  {
    cout<<ans[i]<<" ";
  }
}
