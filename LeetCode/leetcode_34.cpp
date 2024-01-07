//leetcode34
class Solution {
public:
int search_first(vector<int>& nums, int target)
{
    int n=nums.size();
    int l=0,r=n-1;
    int ans=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
          if(target==nums.at(mid))
          {
              ans=mid;
              r=mid-1;
          }
          else if(target<nums.at(mid))
          r=mid-1;
          else
          l=mid+1;
    }
    return ans;
}
int search_last(vector<int>& nums, int target)
{
    int n=nums.size();
    int l=0,r=n-1;
    int ans=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
          if(target==nums.at(mid))
          {
              ans=mid;
             l=mid+1;
          }
          else if(target>nums.at(mid))
          l=mid+1;
          else
          r=mid-1;
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
      vector<int> res;
      int f=search_first(nums,target);
      int las=search_last(nums,target);
      res.push_back(f);
      res.push_back(las);
      return res;
    }
};