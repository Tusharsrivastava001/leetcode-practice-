class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int zcount=0;
        int maxlen=0;
        int n=nums.size();

        for(int right=0;right<nums.size();right++){
            if(nums[right]==0){
                zcount++;
            }
            while(zcount>k){
                if(nums[left]==0){
                    zcount--;
                }
                left++;
            }

            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};