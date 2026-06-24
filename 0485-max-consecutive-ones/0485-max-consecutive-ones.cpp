class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxi=0;
        for(int ele : nums){
            if(ele==1){
                count++;
                maxi=max(count,maxi);
            }
            if(ele==0) count=0;
        }
        return maxi;
    }
};