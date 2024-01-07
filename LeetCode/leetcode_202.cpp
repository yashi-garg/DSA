//happy number leet code
class Solution {
public:
    bool isHappy(int n) {
        int sum=0;
         
         while(sum!=1 && sum!=4)
         {
             sum=0;
             while(n>0)
             {
             int h=n%10;
             sum=sum+(h*h);
             n=n/10;
                      }
                      n=sum;
         }
         if(sum==1)
         return true;
         else
         return false;
    }
};