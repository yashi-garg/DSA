//codeforces1692A
#include <bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin >> t;int i,j;
	int a[t];
	for(j=0;j<t;j++){
	
	for(i=0;i<4;i++)
	{
		cin >> a[i];
	}
	int s=0;
	for(i=1;i<4;i++)
	{
	if(a[0]<a[i])
	s++;	
	}
	cout << s<<endl;
}
}