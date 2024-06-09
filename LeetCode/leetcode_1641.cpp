//leetcode 1641
class Solution {
public:
    int countVowelStrings(int n) {
      vector<int> dp(5,1);
      int ans=0;
      while(--n)
      {
        for(int i=3;i>=0;i--)
        {
            dp[i]=dp[i]+dp[i+1];
        }
      }
      for(int i=0;i<5;i++)
      {
        ans=ans+dp[i];
      }  
      return ans;
    }
};