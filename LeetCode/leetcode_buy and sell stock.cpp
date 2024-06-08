//leetcode buy and sell stock
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int min_ele=prices[0];
        for(int i=0;i<prices.size();i++)
        {
            int p=prices[i]-min_ele;
            if(p>max_profit)
            {
                max_profit=p;
            }
            min_ele=min(prices[i],min_ele);
        }
        return max_profit;
    }
};