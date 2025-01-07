#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> stringMatching(vector<string>& words) {
    vector<string> result;

    // Iterate through all possible pairs of strings in the words array
    for (int i = 0; i < words.size(); i++) {
        for (int j = 0; j < words.size(); j++) {
            if (i != j && words[j].find(words[i]) != string::npos) {
                // If words[i] is a substring of words[j], add it to the result and break to avoid duplicates
                result.push_back(words[i]);
                break;
            }
        }
    }

    return result;
}

int main() {
    vector<string> words1 = {"mass", "as", "hero", "superhero"};
    vector<string> words2 = {"leetcode", "et", "code"};
    vector<string> words3 = {"blue", "green", "bu"};

    // Test case 1
    vector<string> result1 = stringMatching(words1);
    cout << "[";
    for (int i = 0; i < result1.size(); i++) {
        cout << result1[i];
        if (i < result1.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    // Test case 2
    vector<string> result2 = stringMatching(words2);
    cout << "[";
    for (int i = 0; i < result2.size(); i++) {
        cout << result2[i];
        if (i < result2.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    // Test case 3
    vector<string> result3 = stringMatching(words3);
    cout << "[";
    for (int i = 0; i < result3.size(); i++) {
        cout << result3[i];
        if (i < result3.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
