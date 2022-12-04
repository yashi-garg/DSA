//codeforces469A
#include<iostream>
using namespace std;
main()
{
	int n,i;
	cin >> n;
	int p,q;
	cin >> p;
	int a[p];
	for(i=0;i<p;i++)
	cin >> a[i];
	cin >> q;
	int b[q];
	for(i=0;i<q;i++)
	cin >> b[i];
	int l,c,x=0;
	for(l=1;l<=n;l++)
	{
		c=0;
	for(i=0;i<p;i++)
	{
		if(a[i]==l)
		c++;
	}
	for(i=0;i<q;i++)
	{
		if(b[i]==l)
		c++;
	}
	if(c>0)
	x++;
	}
	if(x==n)
	cout << "I become the guy.";
	else
	cout << "Oh, my keyboard!";
	
}