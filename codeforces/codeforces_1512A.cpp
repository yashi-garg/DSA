//codeforces1512A
#include <bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin >> t;
	int i,j,k;int x;
	for(i=0;i<t;i++)
	{
		x=0;
	int n;
	cin >> n;
	int a[100],b[100];
	for(j=0;j<n;j++)
	{
	cin >> a[j];
	b[j]=a[j];
	}
	for(j=0;j<n;j++)
	{
		for(k=0;k<n-(j+1);k++)
		{
			if(b[k]>b[k+1])
			{
				int t=b[k];
				b[k]=b[k+1];
				b[k+1]=t;
			}
		}
	}
	if(b[0]!=b[1])
	x=b[0];
	else if(b[n-1]!=b[n-2])
	x=b[n-1];
	for(j=0;j<n;j++)
	{
		if(a[j]==x)
		{
			cout << j+1 << endl;
			break;
		}
	}
}
}