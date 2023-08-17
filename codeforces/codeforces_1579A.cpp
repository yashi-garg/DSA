//codeforces 1579A
#include<iostream>
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
          int a=0,b=0,c=0;
          for(int i=0;i<l;i++)
          {
              if(s[i]=='A')
              a++;
              else
              if(s[i]=='B')
              b++;
              else
              c++;
          }
          if(b==(a+c))
          cout << "yes"<<endl;
          else
          cout << "NO"<<endl;
     }
}