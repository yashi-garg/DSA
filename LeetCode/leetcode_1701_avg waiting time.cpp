//leetcode 1701  avg waiting time
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n=customers.size();
        double wait=0;
        int finish=0;
        for(int i=0;i<n;i++)
        {
           if(finish<=customers[i][0])
           {
            wait=wait+customers[i][1];
            finish=customers[i][0]+customers[i][1];
           }
           else
           {
            wait=wait+(finish-customers[i][0])+customers[i][1];
            finish=finish+customers[i][1];
           }
        }
        double res=wait/n;
        return res;
    }
};