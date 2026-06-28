class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        std::vector<int> v;
        for(int x : nums){
            if(x==0) count++;
            else v.push_back(x);
        }
        while(count>0){
            v.push_back(0);
            count--;
        }
        int i=0;
        for(int x: v){
            nums[i++]=x;
        }
    //  int j=0;
    // for(int i=0;i<nums.size();i++){
    //     if(nums[i]!=0){
    //         swap(nums[i],nums[j]);
    //         j++;
    //     }
    // }
    }
};