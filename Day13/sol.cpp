#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to check if str1 is both a prefix and a suffix of str2
bool isPrefixAndSuffix(const string& str1, const string& str2) {
    int n1 = str1.size();
    int n2 = str2.size();

    if (n1 > n2) return false; // str1 cannot be a prefix or suffix if it's longer than str2

    // Check if str1 is a prefix of str2
    if (str2.substr(0, n1) != str1) return false;

    // Check if str1 is a suffix of str2
    if (str2.substr(n2 - n1) != str1) return false;

    return true;
}

int countPrefixAndSuffixPairs(const vector<string>& words) {
    int count = 0;
    int n = words.size();

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (isPrefixAndSuffix(words[i], words[j])) {
                ++count;
            }
        }
    }

    return count;
}

int main() {
    // Example inputs
    vector<string> words1 = {"a", "aba", "ababa", "aa"};
    vector<string> words2 = {"pa", "papa", "ma", "mama"};
    vector<string> words3 = {"abab", "ab"};

    // Outputs
    cout << "Output for words1: " << countPrefixAndSuffixPairs(words1) << endl;
    cout << "Output for words2: " << countPrefixAndSuffixPairs(words2) << endl;
    cout << "Output for words3: " << countPrefixAndSuffixPairs(words3) << endl;

    return 0;
}
