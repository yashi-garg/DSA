//codeforces1374A
#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,i;
	cin >> t;
	for(i=0;i<t;i++)
	{
		int n;
		cin >> n;
		int c=0;
		while(n!=1)
		{
			if(n%6==0)
			{
				n=n/6;
				c++;
			}
			else if(n%3==0)
			{
				n=n*2;
				c++;
			}
			else
			{
				c=-1;
				break;
			}
		}
		cout << c << endl;
	}
}