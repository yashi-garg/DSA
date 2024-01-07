//leetcode 278
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=0,u=n;int pos=0;
        while(l<=u)
        {
           int mid=(l+u)/2;
           if(isBadVersion(mid)==true)
           {pos=mid;
           u=mid-1;
           }
           else{
               l=mid+1;
           } 
        }
        return pos;
    } 
};
BINARY SEARCH CONCEPT FOR MINIMUM NO OF TRAVERSAL
