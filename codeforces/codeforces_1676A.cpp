//codeforces1676A
#include<bits/stdc++.h>
using namespace std;
main()
{
    int t,i,j;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        int n;
        cin >> n;
        int s1=0,s2=0;
        int b=n;int a=n/1000;
        while(a!=0)
        {
            int h=a%10;
            s1=s1+h;
            a=a/10;
        }
        for(j=1;j<=3;j++)
        {
            s2=s2+(b%10);
            b=b/10;
        }
        if(s1==s2)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
         
    }
}