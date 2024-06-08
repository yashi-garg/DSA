class Solution {
public:
int helper(vector<int> &prices,int idx,int buy,int **dp)
{
    if(idx==prices.size())
    {
        return 0;
    }
    if(dp[idx][buy]!=-1)
    return dp[idx][buy];
    else
    {
    int profit;
    if(buy)
    {
		//example arr=[7,1,5,3,6,4]
		// profit=4-3=4+(-3)  whenever we buy it adds to our profit as negative and whenever we sell it adds to our profit as positive 
		// two possibilities either we buy or we not buy
     profit=max(-prices[idx]+helper(prices,idx+1,0,dp),0+helper(prices,idx+1,1,dp));   
    }
    else
    {
	//either we sell or we not sell	
        profit=max(+prices[idx]+helper(prices,idx+1,1,dp),helper(prices,idx+1,0,dp));
    }
    dp[idx][buy]=profit;
    }
    return dp[idx][buy];
}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int **dp=new int*[n];
        for(int i=0;i<n;i++)
        {
            dp[i]=new int[2];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
            {
                dp[i][j]=-1;
            }
        }
        int res=helper(prices,0,1,dp);
        return res;
    }
};