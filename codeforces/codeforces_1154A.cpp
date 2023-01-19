//codeforces1154A
#include<bits/stdc++.h>
using namespace std;
main()
{
	int x[4];int i;
	for(i=0;i<4;i++)
	{
		cin >> x[i];
	}
	sort(x,x+4);
	for(i=0;i<3;i++)
	{
		cout << (x[3]-x[i]) << "\t";
	}
}