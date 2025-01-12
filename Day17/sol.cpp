#include <iostream>
#include <string>
using namespace std;

bool canBeValid(string s, string locked) {
    int n = s.length();
    if (n % 2 != 0) return false; // Odd length strings cannot be valid.

    // Forward pass
    int open = 0, balance = 0;
    for (int i = 0; i < n; ++i) {
        if (locked[i] == '0' || s[i] == '(') {
            open++;
        } else {
            open--;
        }
        if (locked[i] == '0' || s[i] == ')') {
            balance++;
        } else {
            balance--;
        }
        if (open < 0) open = 0; // Reset if open becomes negative.
        if (balance < 0) return false; // Invalid if balance goes negative.
    }

    // Backward pass
    open = balance = 0;
    for (int i = n - 1; i >= 0; --i) {
        if (locked[i] == '0' || s[i] == ')') {
            open++;
        } else {
            open--;
        }
        if (locked[i] == '0' || s[i] == '(') {
            balance++;
        } else {
            balance--;
        }
        if (open < 0) open = 0; // Reset if open becomes negative.
        if (balance < 0) return false; // Invalid if balance goes negative.
    }

    return true;
}

int main() {
    string s1 = "))()))", locked1 = "010100";
    string s2 = "()()", locked2 = "0000";
    string s3 = ")", locked3 = "0";

    cout << boolalpha;
    cout << "Example 1: " << canBeValid(s1, locked1) << endl; // true
    cout << "Example 2: " << canBeValid(s2, locked2) << endl; // true
    cout << "Example 3: " << canBeValid(s3, locked3) << endl; // false

    return 0;
}
