class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> map;
        for(auto ele : nums){
            map[ele]++;
        }
        std::vector<int> v;
        for(auto it : map){
            if(it.second==2) v.push_back(it.first);
        }
        return v;
    }
};