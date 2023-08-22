//codeforces 1703A
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
         int c=0;
         if(s[0]=='y' || s[0]=='Y')
         c++;
         if(s[1]=='e' || s[1]=='E')
         c++;
         if(s[2]=='s' || s[2]=='S')
         c++;
         if(c==3)
         cout <<"YES"<<endl;
         else
         cout << "NO"<<endl;
     }
}