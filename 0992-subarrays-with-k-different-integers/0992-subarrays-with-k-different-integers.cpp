class Solution {
public:
    int atmostk(std::vector<int> &nums,int k){
        int n=nums.size();
        int left=0;
        int count=0;
        unordered_map<int,int> map;
        for(int right=0;right<n;right++){
            map[nums[right]]++;
            while(map.size()>k){
                map[nums[left]]--;
                 if(map[nums[left]] == 0){
                    map.erase(nums[left]);
                    }
                left++;
            }
            count+=right-left+1;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmostk(nums,k)-atmostk(nums,k-1);
    }
};