#include<iostream>
using namespace std;

int getdevisorsum(int num)
{
  int sum=0;
  for(int i=1;i<num;i++)
  {
    if(num%i==0)
    {
      sum+=i;
    }
  }
  return sum;
}

int main()
{
   int num1=6;
   int num2=140;

   float sum1=getdevisorsum(num1);
   float sum2= getdevisorsum(num2);

   if((sum1/num1)==(sum2/num2))
   {
    cout<<num1<<" and "<<num2<<" are friendly pair";
   }
  else{
     cout<<num1<<" and "<<num2<<" are not friendly pair";
  }
}