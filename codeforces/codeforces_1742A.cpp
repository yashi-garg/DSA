//codeforces1742A
#include<bits/stdc++.h>
using namespace std;
main()
{
	int t,i,j;
	cin >> t;
	for(i=0;i<t;i++)
	{
		int a[3];
		for(j=0;j<3;j++)
		{
			cin >> a[j];
		}
		sort(a,a+3);
		if((a[0]+a[1])==a[2])
		cout << "YES" << endl;
		else
		cout << "NO" << endl;
	}
}