//codeforces144A
#include<iostream>
using namespace std;
main()
{
	int n;
	cin >> n;
	int a[n],i;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int min=0,max=0,l=a[0],s=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<=s)
		{
		min=i;
		s=a[i];
	}
		if(a[i]>l)
		{
		max=i;
		l=a[i];
	}
	}
	if(max<min)
	cout << (max+(n-1-min));
	else
	{
		cout << ((max+(n-1-min))-1);
	}
}