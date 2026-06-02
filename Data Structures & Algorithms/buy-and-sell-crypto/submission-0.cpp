class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int buyingPrice=prices[0];

        for(int i=0;i<prices.size();i++)
        {
            buyingPrice=min(buyingPrice,prices[i]);
            profit=max(profit,prices[i]-buyingPrice);
        }

        return profit;
    }
};
