class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int curr=0;
        for(int ele : nums){
            if(ele==1){
                curr++;
                count=max(count,curr);
            }
            else curr=0;
        }
        return count;
    }
};