#include<iostream>

#include<math.h>
using namespace std;

// function to convert octal to decimal
int getOctal(long long num)
{
    int i = 0, decimal = 0;
    
    // will only work for bases 2 - 10
    int base = 8;
    
    //converting octal to decimal
    while (num!=0)
    {
        int digit = num % 10;
        decimal += digit * pow(base, i);

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
    long long octal = 462;
    
    cout << getOctal(octal);   
    
    return 0;
}