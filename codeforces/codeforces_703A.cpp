//codeforces703A
#include<iostream>
using namespace std;
main()
{
	int n,i,m1=0,c1=0;
	cin >> n;int m,c;
	for(i=0;i<n;i++)
	{
		
		cin >> m >> c;
		if(m>c)
		m1++;
		else if(c>m)
		c1++;
		else if(m==c)
		{
			m1++;
			c1++;
		}
	}
	if(m1>c1)
	cout << "Mishka";
	else if(c1>m1)
	cout << "Chris";
	else if(m1==c1)
	cout << "Friendship is magic!^^";
}