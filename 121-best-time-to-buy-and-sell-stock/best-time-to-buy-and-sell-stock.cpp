class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minCost=prices[0];
        int maxPrice=0;

        for(int i=0;i<n;i++)
        {
            int cost = prices[i] - minCost;
            minCost = min(minCost,prices[i]);
            maxPrice = max(maxPrice,cost);
        }

        return maxPrice;
    }
};