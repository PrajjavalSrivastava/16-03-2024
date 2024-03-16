// Biweekly Contest 126 16-03-2024
// 3079. Find the Sum of Encrypted Integers

class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int ans = 0;
        for(auto& x: nums) {
            int maxDigit = 0;
            vector<int> digits;
            while(x) {
                digits.push_back(x % 10);
                x /= 10;
            }
            for(auto& y: digits) {
                maxDigit = max(maxDigit, y);
            }
            for(auto& digit: digits) {
                digit = maxDigit;
            }
            int newNum = 0;
            for(auto& digit: digits) {
                newNum = newNum * 10 + digit;
            }
            ans += newNum;
        }
        return ans;
    }
};