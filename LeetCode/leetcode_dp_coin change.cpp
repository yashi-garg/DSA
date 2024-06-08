//leetcode coin chnage tabulation
class Solution {
public:
int helper(vector<int> &coins,int n,int amount)
{
     long **dp=new long*[n+1];
        for(int i=0;i<=n;i++)
        {
            dp[i]=new long[amount+1];
        }
        //first row
        for(int i=0;i<=amount;i++)
        {
           dp[0][i]=0; 
        }
        //first column
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=0;
        }
        for(int i=1;i<=amount;i++)
        {
            if(i%coins[0]==0)
            dp[1][i]=i/coins[0];
            else
            dp[1][i]=INT_MAX;
        }
        for(int i=2;i<=n;i++)
        {
            for(int j=1;j<=amount;j++)
            {
                if(coins[i-1]>j)
                {
                    dp[i][j]=dp[i-1][j];
                }
                else
                {
                    dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
                }
            }
        }
        if(dp[n][amount]!=INT_MAX)
        return dp[n][amount];
        else
        return -1;
}
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        int res=helper(coins,n,amount);
        return res;
    }
};