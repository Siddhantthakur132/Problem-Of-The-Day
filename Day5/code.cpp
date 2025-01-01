class Solution {
public:
    int maxScore(string s) {
        int maxS1 = 0; // To store the maximum score
        int lc, rc;    // Counters for zeros on the left and ones on the right

        // Iterate through possible split points
        for (int left = 0; left < s.size() - 1; left++) { 
            lc = 0; 
            rc = 0;

            // Count zeros in the left part
            for (int i = 0; i <= left; i++) {
                if (s[i] == '0') {
                    lc++;
                }
            }

            // Count ones in the right part
            for (int j = left + 1; j < s.size(); j++) {
                if (s[j] == '1') {
                    rc++;
                }
            }

            // Calculate the score and update the maximum score
            int sum = lc + rc;
            maxS1 = max(maxS1, sum);
        }

        return maxS1;
    }
};
