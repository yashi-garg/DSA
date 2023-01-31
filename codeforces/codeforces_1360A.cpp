//codeforces1360A
#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
     cin >> t;
      while(t-- >0)
      {
          int a,b;
           cin >> a>> b;
           if(a>b)
           swap(a,b);
           int r=max(2*a,b);
           cout << r*r << endl;
            
                 }
}