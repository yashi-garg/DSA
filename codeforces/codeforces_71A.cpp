#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    while(n-->0)
    {
        string s;
        string ans = s;
        cin>>s;
        int len = s.length();
        if(len>10)
        {
            ans = s.at(0)+to_string(len-2)+s.at(len-1);
            cout<<ans<<endl;
        }
        else
            cout<<s<<endl;
    }
    return 0 ;
}

