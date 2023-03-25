//codeforces1791A
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
     int t;
     string s="codeforces";
     int l=s.length();
     cin >> t;
     while(t-->0)
     {
         char ch;
          cin >> ch; int p=0;
          for(int i=0;i<l;i++)
          {
              if(ch==s[i])
              {
              p++;
              break;
              }
          }
          if(p>0)
          cout <<"YES"<<endl;
          else
          cout <<"NO"<<endl;
     }
}