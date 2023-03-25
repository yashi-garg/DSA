//codeforces1367A
#include<bits/stdc++.h>
#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
   int t;
   cin >> t;
    while(t-->0)
    {
        string s;
         cin >> s;
         int l=s.length();
         string p=s.substr(1,l-1);
         int l1=p.length();string x="";
         for(int i=0;i<l1;i=i+2)
         {
             x=x+p[i];
         }
         x=s[0]+x;
         cout << x <<endl;
    }
}
