#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        int count;
        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            count = 0;
            for (int j = 0; j <= i; j++) {
                for (int k = 0; k <= i; k++) {
                    if (B[k] == A[j]) {
                        count++;
                    }
                }
            }
            ans[i] = count;
        }
        return ans;
    }
};

int main() {
    // Example Input
    vector<int> A = {1, 3, 2, 4};
    vector<int> B = {3, 1, 2, 4};

    Solution solution;
    vector<int> result = solution.findThePrefixCommonArray(A, B);

    // Print the result
    cout << "Prefix Common Array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
