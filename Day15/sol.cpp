#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

// Helper function to compute the frequency of each character in a word
vector<int> getFrequency(const string& word) {
    vector<int> freq(26, 0);
    for (char c : word) {
        freq[c - 'a']++;
    }
    return freq;
}

vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
    // Step 1: Compute the maximum frequency of each character in words2
    vector<int> maxFreq(26, 0);
    for (const string& word : words2) {
        vector<int> freq = getFrequency(word);
        for (int i = 0; i < 26; i++) {
            maxFreq[i] = max(maxFreq[i], freq[i]);
        }
    }

    // Step 2: Check each word in words1
    vector<string> result;
    for (const string& word : words1) {
        vector<int> freq = getFrequency(word);
        bool isUniversal = true;
        for (int i = 0; i < 26; i++) {
            if (freq[i] < maxFreq[i]) {
                isUniversal = false;
                break;
            }
        }
        if (isUniversal) {
            result.push_back(word);
        }
    }

    return result;
}

int main() {
    vector<string> words1 = {"amazon", "apple", "facebook", "google", "leetcode"};
    vector<string> words2 = {"e", "o"};

    vector<string> result = wordSubsets(words1, words2);

    cout << "Universal words: ";
    for (const string& word : result) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
