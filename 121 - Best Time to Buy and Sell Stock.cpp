class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() == 0)
            return 0;

        int lowestValue = prices.at(0);
        int currentProfit = 0;
        int maxProfit = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (prices.at(i) < lowestValue) {
                lowestValue = prices.at(i);
                currentProfit = 0;
            }

            if (prices.at(i) - lowestValue > currentProfit)
                currentProfit = prices.at(i) - lowestValue;

            if (currentProfit > maxProfit)
                maxProfit = currentProfit;
        }

        return maxProfit;
    }
};