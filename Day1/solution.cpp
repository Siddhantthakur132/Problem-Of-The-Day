#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string sortVowels(string s) {
        // Step 1: Create frequency arrays for uppercase and lowercase vowels
        vector<int> Upper(26, 0); // Stores the frequency of uppercase vowels
        vector<int> Lower(26, 0); // Stores the frequency of lowercase vowels

        // Step 2: Traverse the string to identify vowels
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U') {
                Upper[s[i] - 'A']++; // Increment the count for uppercase vowel
                s[i] = '#';         // Replace the vowel with a placeholder
            } else if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                Lower[s[i] - 'a']++; // Increment the count for lowercase vowel
                s[i] = '#';          // Replace the vowel with a placeholder
            }
        }

        // Step 3: Collect vowels in sorted order
        string ans;
        // Append uppercase vowels to the result string
        for (int i = 0; i < 26; i++) {
            char c = 'A' + i;
            while (Upper[i]) {
                ans += c;
                Upper[i]--;
            }
        }
        // Append lowercase vowels to the result string
        for (int i = 0; i < 26; i++) {
            char c = 'a' + i;
            while (Lower[i]) {
                ans += c;
                Lower[i]--;
            }
        }

        // Step 4: Replace placeholders in the original string with sorted vowels
        int first = 0, second = 0;
        while (second < ans.size()) {
            if (s[first] == '#') {
                s[first] = ans[second]; // Replace placeholder with sorted vowel
                second++;
            }
            first++;
        }

        return s; // Return the updated string
    }
};

int main() {
    Solution solution;
    string input = "leetcode"; // Example input
    string result = solution.sortVowels(input);
    cout << "Sorted vowels: " << result << endl; // Output the result
    return 0;
}
