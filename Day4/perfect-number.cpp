#include<iostream>
using namespace std;

bool perfectnumber(int x)
{
  int sum=0;
  for(int i=1;i<x;i++)
  {
    if(x%i==0)
    {
      sum+=i;
    }
  }
 return sum==x;
}

int main()
{
  int x;
  cout<<"Enter a number: ";
  cin>>x;

  if(perfectnumber( x))
  {
    cout<<x<<" is a perfect number";
  }
else{
   cout<<x<<" is not a perfect number";
}
}