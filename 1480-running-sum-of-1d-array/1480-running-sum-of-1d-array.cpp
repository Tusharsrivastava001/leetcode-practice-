class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        std::vector<int> v;
        int sum=0;
        for(int ele : nums){
            v.push_back(sum+=ele);
        }
        return v;
    }
};