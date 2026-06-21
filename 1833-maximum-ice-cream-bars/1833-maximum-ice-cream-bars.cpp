class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        std::sort(costs.begin(),costs.end());
        int sum=0;
        int count=0;
        for(auto ele : costs){
            if(sum+ele>coins) break;
            count++;
            sum+=ele;
        }
        return count;
    }
};