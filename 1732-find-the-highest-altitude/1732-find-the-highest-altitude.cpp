class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        int maxi=0;
        for(auto ele : gain){
            sum+=ele;
            maxi=max(maxi,sum);
        }
        return maxi;
    }
};