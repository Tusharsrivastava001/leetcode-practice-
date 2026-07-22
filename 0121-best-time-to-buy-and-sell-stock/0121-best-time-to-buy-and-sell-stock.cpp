class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int left = 0;   // Buy
        int right = 1;  // Sell

        int maxProfit = 0;

        while (right < prices.size()) {

            // Profit possible
            if (prices[left] < prices[right]) {

                int profit = prices[right] - prices[left];
                maxProfit = max(maxProfit, profit);

            }
            else {
                // Better buying day found
                left = right;
            }

            right++;
        }

        return maxProfit;
    }
};