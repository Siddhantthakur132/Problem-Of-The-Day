#include <iostream>
#include <vector>
using namespace std;

bool doesValidOriginalArrayExist(const vector<int>& derived) {
    int n = derived.size();
    // Check parity condition
    int xorSum = 0;
    for (int value : derived) {
        xorSum ^= value;
    }
    // If xorSum is 0, a valid original array exists
    return xorSum == 0;
}

int main() {
    // Example 1
    vector<int> derived1 = {1, 1, 0};
    cout << (doesValidOriginalArrayExist(derived1) ? "true" : "false") << endl;

    // Example 2
    vector<int> derived2 = {1, 1};
    cout << (doesValidOriginalArrayExist(derived2) ? "true" : "false") << endl;

    // Example 3
    vector<int> derived3 = {1, 0};
    cout << (doesValidOriginalArrayExist(derived3) ? "true" : "false") << endl;

    return 0;
}
