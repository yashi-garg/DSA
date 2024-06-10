//leetcode 581 shortest unsorted continuous subarray
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
      int n =nums.size();
        int st=0;
        int min=INT_MAX;
        for(int i=n-1;i>=0;i--) {
            if(nums[i]<=min) {
                min=nums[i];
            }
            else {
                st=i;
            }
        }
        int ed=-1;
        int mx=INT_MIN;
        for(int i=0;i<n;i++) {
            if(nums[i]>=mx) {
                mx=nums[i];
            }
            else{
                ed=i;
            }
        }
        return ed-st+1;
    }
};