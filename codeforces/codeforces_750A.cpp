//codeforces750A
#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,k,i;int c=0;
	cin >> n >>k;
	int min=240-k;
	for(i=1;i<=n;i++)
	{
	min=min-(5*i);
	if(min<0)
	break;
	else
	c++;	
	}
	cout << c;
	
}