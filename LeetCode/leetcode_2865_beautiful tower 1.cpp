//leetcode
//beautiful tower1
class Solution {
public:
    long long maximumSumOfHeights(vector<int>& heights) {
        int n=heights.size();
        long long ans=0;
        for(int i=0;i<n;i++)
        {
         // vector<int> h=heights; //changes in vector 2 does not affect vector 1
          int m=heights[i];
           long long sum=m;
          for(int j=i-1;j>=0;j--)
          {
           m=min(m,heights[j]); 
           sum=sum+m;
          }
          m=heights[i];
          for(int j=i+1;j<n;j++)
          {
            m=min(m,heights[j]);
            sum=sum+m;
          }
          if(sum>ans)
          ans=sum;
        }
        return ans;
    }
};