class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> sub;
        long long MOD = 1e9 + 7;

        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                sub.push_back(sum);
            }
        }

        sort(sub.begin(), sub.end());

        long long totalSum = 0;
        for (int i = left - 1; i < right; i++) {
            totalSum = (totalSum + sub[i]) % MOD;
        }

        return totalSum;
    }
};