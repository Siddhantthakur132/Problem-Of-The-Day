#include <bits/stdc++.h>
using namespace std;
 
bool isPerfectSquare(long double x)
{
    if (x >= 0) {
 
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    
    return false;
}
 
int main()
{
    long long x = 49;
    if (isPerfectSquare(x))
        cout << "True";
    else
        cout << "False";
    return 0;
}