//codeforces43A
#include<bits/stdc++.h>
using namespace std;
 main()
 {
 	int n,i;
 	 cin >> n;
 	  string s[100];
 	  for(i=0;i<n;i++)
 	  cin >> s[i];
 	  string a=s[0];
 	  string b;
 	  for(i=1;i<n;i++)
 	  {
 	  	if(s[i]==a)
 	  	continue;
 	  	else
 	  	{
 	  		b=s[i];
 	  		break;
		   }
	   }
 	  int a1=0,b1=0;
 	  for(i=0;i<n;i++)
 	  {
 	  	if(s[i]==a)
 	  	a1++;
 	  	else
 	  	b1++;
	   }
	   if(a1>b1)
	   cout << a;
	   else
	   cout << b;
 }