//codeforces 1829A
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
         string s1="codeforces";
         for(int i=0;i<10;i++)
         {
             if(s[i]!=s1[i])
             c++;
         }
         cout << c << endl;
    }
}