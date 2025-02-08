// Algorithm:-
// For a user input num

// Initialize reverse = 0, rem
// Extract the last digit of num (rem = num % 10)
// Multiply reverse with 10 & add remainder (reverse = reverse * 10 + rem)
// Reduce the original number (num = num/10)
// Keep doing this until original number becomes 0

#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter a number";
  cin>>n;
  int ans=0,rem;
  while(n)
  {
    rem=n%10;
    n/=10;
    ans=ans*10+rem;
    
  }
  cout<<ans;
}
