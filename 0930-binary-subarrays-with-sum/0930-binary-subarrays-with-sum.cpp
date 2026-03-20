class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> map;
        map[0]=1;
        //ye map prefix sum kitni baar aaya hai ye store kar rha hai 
        int sum=0;
        int count=0;
        for(int x : nums){
            sum+=x;
            if(map.count(sum-goal)){
                count+=map[sum-goal];
            }
            map[sum]++;
        }
        return count;
    }
};