class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
    unordered_map<int,int> map;
        map[0]=1;
        //ye map prefix sum kitni baar aaya hai ye store kar rha hai 
        int sum=0;
        int count=0;
        for(int x : nums){
            if(x%2!=0) sum+=1;
            if(map.count(sum-k)){
                count+=map[sum-k];
            }
            map[sum]++;
        }
        return count;}
};