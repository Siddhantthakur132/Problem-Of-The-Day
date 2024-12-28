#include<iostream>
using namespace std;
int automorphic(int n)
{
long long square=n*n;
  while(n)
  {
    if(n%10!=square%10)
    {
      return 0;
    }
    square/=10;
    n/=10;
   
  }
  return 1;
}

int main()
{
  int n=76;
if(automorphic( n))
{
  cout<<n<<" is automorphic";
}
else{
  cout<<n<<" is not  automorphic";
} 
}