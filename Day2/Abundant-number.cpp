#include<iostream>
using namespace std;

int abundantnum(int num)
{
  int sum=0;
  for(int i=1;i<num;i++)
  {
    if(num%i==0)
    sum+=i;
  }
  return sum;
}

int main()
{
  int num;
  cout<<"Enter the number: ";
  cin>>num;

  int m=abundantnum(num);
  if(m>num)
  {
    cout<<num<<" is abundant number";
  }
  else
  cout<<num<<" is not abundant number";
}