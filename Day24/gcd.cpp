#include<iostream>
using namespace std;

int main()
{
    int n1 = 18, n2 = 45, gcd = 1;
    
    for(int i = 1; i <= n1 || i <= n2; i++) {
        if(n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }
    
    cout<<"The GCD is "<< gcd;
    
    return 0;
}
// Time complexity : O(N)
// Space complexity : O(1)