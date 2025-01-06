#include<iostream>
using namespace std;
int main()
{
  int n=12321;
  int temp=n;
  int rem,ans=0;

  while(temp)
  {
    rem=temp%10;
    temp/=10;
    ans=ans*10+rem;
  }

  if(ans==n)
  {
    cout<<n<<" is a plindrome";
  }
  else{
     cout<<n<<" is not  a plindrome";
  }
}
