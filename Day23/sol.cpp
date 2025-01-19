#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num1 = 12, num2 = 14, lcm;

    // finding the larger number here
    int max = (num1 > num2)? num1 : num2;

    // LCM will atleast be >= max(num1, num2)
    // Largest possibility of LCM will be num1*num2
    for(int i = max ; i <= num1*num2 ; i++)
        {
            if(i % num1 == 0 && i % num2 == 0){
                lcm = i;
                break;
            }
        }

    cout<<"LCM of "<<num1<<" and "<<num2<<" is "<<lcm;

    return 0;
}
// Time Complexity : O(N)
// Space Complexity : O(1)