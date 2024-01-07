//204 leet code
//SEIVE OF ERATOSTHENES
class Solution {
public:
    int countPrimes(int n) {
        vector<bool> seen(n, false);
        int ans = 0;
        for (int num = 2; num < n; num++) {
            if (seen[num]) continue;
            ans++;
            for (long mult = (long)num * num; mult < n; mult += num)
                seen[mult] = true;
        }
        return ans;
    }
};

//my code
class Solution {
public:
    int countPrimes(int n) {
        int f=0;
        int arr[10000001]={0};
        for(int i=2;i<=n;i++)
        {
            if(arr[i]==0)
            {
                for(long j=(long)i*i;j<=n;j=j+i)
                {
                    arr[j]=1;
                }
            }
        }
        for(int i=2;i<n;i++)
        {
            if(arr[i]==0)
            {
                f++;
            }
        }
        return f;
    }
};