//codeforces731A
#include<bits/stdc++.h>
using namespace std;
int main()
{
        int i,j,k;
        int l,d,count=0;
        string s;

        cin>>s;
        l=s.length();

        d=abs(s[0]-'a');
        if(d<=13)
            count+=d;
        else
        {
            count+=(26-d);
        }


        for(i=0;i<l-1;i++)
        {
            d=abs(s[i]-s[i+1]);

            if(d<=13)
                count+=d;
            else
            {
                count+=(26-d);
            }
        }

        cout<<count;

        return 0;

}