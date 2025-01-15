#include <iostream>
using namespace std;

class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int num_bits = __builtin_popcount(num2); // Count the number of set bits in num2

        // Initialize a candidate for x
        int x = 0;
        int bits_set = 0;

        // First loop: Try to set bits in x that are also set in num1
        for (int i = 31; i >= 0; --i) {
            if (num1 & (1 << i)) {  // If the i-th bit of num1 is set
                if (bits_set < num_bits) {
                    x |= (1 << i);  // Set this bit in x
                    bits_set++;
                }
            }
        }

        // Second loop: If not enough bits are set, fill remaining bits
        for (int i = 0; i < 32; ++i) {
            if (bits_set < num_bits && !(x & (1 << i))) { // Only fill unset bits in x
                x |= (1 << i);  // Set this bit in x
                bits_set++;
            }
        }

        return x;
    }
};

int main() {
    Solution solution;
    
    // Test case 1
    int num1 = 3, num2 = 5;
    cout << "Result for num1 = 3, num2 = 5: " << solution.minimizeXor(num1, num2) << endl;  // Expected output: 3

    // Test case 2
    num1 = 1, num2 = 12;
    cout << "Result for num1 = 1, num2 = 12: " << solution.minimizeXor(num1, num2) << endl;  // Expected output: 3

    // Test case 3
    num1 = 7, num2 = 10;
    cout << "Result for num1 = 7, num2 = 10: " << solution.minimizeXor(num1, num2) << endl;  // Expected output: 7

    // Test case 4
    num1 = 0, num2 = 15;
    cout << "Result for num1 = 0, num2 = 15: " << solution.minimizeXor(num1, num2) << endl;  // Expected output: 15

    return 0;
}
