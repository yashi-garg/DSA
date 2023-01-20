//codeforces431A
#include <bits/stdc++.h>
using namespace std;
main()
{
	int a[4];
	int i;
	for(i=0;i<4;i++)
	cin >> a[i];
	string s;
	cin >> s;
	int l=s.size();int sum=0;
	for(i=0;i<l;i++)
	{
	  if(s[i]=='1')
	  sum=sum+a[0];
	  else if(s[i]=='2')
	  sum=sum+a[1];
	  else if(s[i]=='3')
	  sum=sum+a[2];
	  else if(s[i]=='4')
	  sum=sum+a[3];
	}
	cout << sum;
	
}