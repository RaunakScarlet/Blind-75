class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int Profit = 0;
        int buy = prices[0];

        for (int i = 1; i < prices.size(); i++)
        {
            buy = min(buy, prices[i]);
            Profit = max(Profit, prices[i] - buy);
        }
        return Profit;
    }
};

// take care of case 2, 4, 1. -> 2
// buy sell -> calculate max profit