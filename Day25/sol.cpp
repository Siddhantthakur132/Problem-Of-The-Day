#include<bits/stdc++.h>
using namespace std;

// function to convert binary to decimal
int getDecimal(long long num)
{
    int i = 0, decimal= 0;
    
    //converting binary to decimal
    while (num!=0)
    {
        int digit = num % 10;
        decimal += digit * pow(2,i);

        num /= 10;
        i++;
    }
    return decimal;
}

// main program
int main()
{
    // long used rather than int to store large values
    // Ex : int wont store 111111111111 (12 digits) as
    // limit for int is 2147483647 (10 digits)
    long long binary = 11011;
    
    cout << getDecimal(binary);   
    
    return 0;
}