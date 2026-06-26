class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();

        int pref = n;                     // shifted prefix index
        vector<int> freq(2 * n + 1, 0);
        freq[pref] = 1;

        long long less = 0;
        long long ans = 0;

        for (int x : nums) {
            if (x == target)
                less += freq[pref++];
            else
                less -= freq[--pref];

            ans += less;
            freq[pref]++;
        }

        return ans;
    }
};