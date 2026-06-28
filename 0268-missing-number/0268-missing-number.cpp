class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int actualsum=0;
        for(int x : nums){
            sum+=x;
        }
        for(int i=0;i<=nums.size();i++){
            actualsum+=i;
        }
        return actualsum-sum;
    }
};