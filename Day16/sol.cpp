#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool canConstruct(string s, int k) {
    if (k > s.size()) return false; // More palindromes than characters.
    
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    int odd_count = 0;
    for (auto& pair : freq) {
        if (pair.second % 2 != 0) {
            odd_count++;
        }
    }

    return odd_count <= k; // Enough space to place odd characters in k palindromes.
}

int main() {
    // Example test cases
    cout << boolalpha << canConstruct("annabelle", 2) << endl; // true
    cout << boolalpha << canConstruct("leetcode", 3) << endl;  // false
    cout << boolalpha << canConstruct("true", 4) << endl;      // true
    return 0;
}
