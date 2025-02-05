#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool canBeEqualWithOneSwap(string s1, string s2) {
    // If strings are already equal, return true
    if (s1 == s2) return true;

    vector<int> diffIndices;

    // Find the indices where the characters differ
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[i]) {
            diffIndices.push_back(i);
        }
    }

    // If there are exactly two differences, check if swapping makes them equal
    if (diffIndices.size() == 2) {
        int i = diffIndices[0];
        int j = diffIndices[1];

        // Swap characters in s1 and check
        swap(s1[i], s1[j]);
        if (s1 == s2) return true;

        // Swap back to original
        swap(s1[i], s1[j]);

        // Swap characters in s2 and check
        swap(s2[i], s2[j]);
        if (s1 == s2) return true;
    }

    return false;
}

int main() {
    string s1, s2;
    cout << "Enter first string: ";
    cin >> s1;
    cout << "Enter second string: ";
    cin >> s2;

    if (canBeEqualWithOneSwap(s1, s2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
