class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int n=prices.size();
            int minPrice=prices[0];
            int maxProfit=0;
            for (int i=0; i<n; i++) {
                if (minPrice > prices[i]) {
                    minPrice = prices[i];
                }
                int profit = prices[i] - minPrice;
                if (profit > maxProfit) {
                    maxProfit = profit;
                }
            }
            return maxProfit;
        }
    };