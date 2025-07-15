class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::unordered_map<int,int> map;
        
        for(int ele : nums){
            map[ele]++;
        }
        int a=0;
        for(auto ele : map){
            if(ele.second==1){
                a=ele.first;
            }
        }
        return a;
    }
};
