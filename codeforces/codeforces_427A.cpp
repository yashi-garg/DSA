//codeforces427A
#include<iostream>
using namespace std;
main()
{
	int n;
	cin >> n;
	int a[100000];int i;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
	}
	int f=0,c=0;
	for(i=0;i<n;i++)
	{
		if(a[i]!=-1)
		f=f+a[i];
		else
		{
			if(f>0)
			f--;
			else
			c++;
		}
	}
	cout << c;
}