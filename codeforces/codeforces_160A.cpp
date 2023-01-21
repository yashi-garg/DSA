//codeforces160A
#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;int i,j;
	cin >> n;
	 int a[100];
	 for(i=0;i<n;i++)
	 {
	 	cin >> a[i];
	 }
	 int s=0,s1=0;
	 sort(a,a+n);
	 int c=0;
	 for(i=n-1;i>=0;i--)
	 {
	 	s=s+a[i];c++;s1=0;
	 	for(j=0;j<=i-1;j++)
	 	{
	 		s1=s1+a[j];
		 }
		 if(s>s1)
		 break;
		 }
	 cout <<(c);
	 }