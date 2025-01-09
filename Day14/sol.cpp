#include <iostream>
#include <vector>
#include <string>

using namespace std;

int countPrefixes(const vector<string>& words, const string& pref) {
    int count = 0;
    for (const string& word : words) {
        if (word.substr(0, pref.size()) == pref) {
            count++;
        }
    }
    return count;
}

int main() {
    // Example 1
    vector<string> words1 = {"pay", "attention", "practice", "attend"};
    string pref1 = "at";
    cout << "Output: " << countPrefixes(words1, pref1) << endl; // Output: 2

    // Example 2
    vector<string> words2 = {"leetcode", "win", "loops", "success"};
    string pref2 = "code";
    cout << "Output: " << countPrefixes(words2, pref2) << endl; // Output: 0

    return 0;
}
