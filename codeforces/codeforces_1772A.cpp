//codeforces1772A
//#include<bits/stdc++.h>
#include <iostream>
#include<stdlib.h>
#include<string>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while(t-->0)
  {
      string s,x,y;
       cin >> s;
        int l=s.length();
        for(int i=0;i<l;i++)
        {
            if(s[i]=='+')
            {
                x=s.substr(0,i);
                y=s.substr(i+1,l);
                break;
            }

        }
        int a;
		 a=stoi(x);
            int b=stoi(y);
            cout << a+b << endl;
  }
  return 0;
}
//function to convert string to int stoi();
//header file string needed
