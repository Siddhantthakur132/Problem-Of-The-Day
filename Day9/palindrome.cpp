#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

string largestPalindrome(string str) {
    vector<int> freq(10, 0);

    // Count the frequency 
    for (char ch : str) {
        freq[ch - '0']++;
    }

    string firsthalf = "", middle = "";

   
    for (int i = 9; i >= 0; i--) { 
       
        if (freq[i] % 2 != 0 && middle.empty()) {
            middle = to_string(i);
            freq[i]--;
        }
        firsthalf += string(freq[i] / 2, '0' + i);
    }

    string secondhalf = firsthalf;
    
    reverse(secondhalf.begin(), secondhalf.end());
    return firsthalf + middle + secondhalf;
}

int main() {
    string str1 = "211";
    string str2 = "1919";
    cout << largestPalindrome(str1) << endl;//op 121 
    cout << largestPalindrome(str2) ;

}
