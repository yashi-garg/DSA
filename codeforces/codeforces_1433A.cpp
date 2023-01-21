//codeforces1433A
#include<bits/stdc++.h>
using namespace std;
main()
{
	 int t;
	 cin >> t;
	int i,j;
	 for(i=1;i<=t;i++)
	 {
	 	int x;
	 	 cin >> x;
	 	 int s=0;
	 	 for(j=1;j<=9;j++)
	 	 {
	 	 	if(j*1==x)
	 	 	{
	 	 	s=s+1;
	 	 	break;
	 	 }
	 	 else
	 	 s+=1;
	 	 	if(j*11==x)
	 	 	{
	 	 	s+=2;
	 	 	break;
	 	 }
	 	 else
	 	 s+=2;
	 	 	if(j*111==x)
	 	 	{
	 	 	s+=3;
	 	 	break;
	 	 }
	 	 else
	 	 s+=3;
	 	 	if(j*1111==x)
	 	 	{
			  s+=4;
			  break;
			  }
			  else
			  s=s+4;
		  }
		  cout << s << endl;
	 }
}