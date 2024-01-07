//leet code 35  arrays
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int n=nums.size();
       int pos=-1;
       if(target<=nums.at(0))
       pos=0;
       else if(target > nums.at(n-1))
       pos=n;
       else
       {
       for(int i=0;i<n-1;i++)
       {
if(target>nums.at(i) && target <= nums.at(i+1))
pos=i+1;
       }
       }
       return pos; 
    }
};