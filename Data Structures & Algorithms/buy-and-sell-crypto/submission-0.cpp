class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buyPrice = INT_MAX;

        for (size_t i = 0; i < prices.size(); i++)
        {
            if (prices[i] < buyPrice) {buyPrice = prices[i];}

            int diff = prices[i] - buyPrice;

            profit = max(profit,diff);
        }
        return profit;
    }
};
