//codeforces263A
#include<bits/stdc++.h>
//#include <iostream>
//#include<algorithm>
#include<stdlib.h>
using namespace std;
int main()
{
   int a[5][5];
   for(int i=0;i<5;i++)
   {
       for(int j=0;j<5;j++)
       cin >> a[i][j];
   }
   int sum=0;
   int r=0,c=0;
   for(int i=0;i<5;i++)
   {
       for(int j=0;j<5;j++)
       {
        if(a[i][j]==1)
        {
            r=i+1;
            c=j+1;
        }
       }
       }
       //cout <<r<<" "<<c<<endl;
       sum=sum+abs(3-r)+abs(3-c);
   cout << sum;
}
//abs(num) function under the stdlib.h header file is used to return the absolute value of a number