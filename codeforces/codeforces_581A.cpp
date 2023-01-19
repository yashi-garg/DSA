//codeforces581A
#include<bits/stdc++.h>
using namespace std;
main()
{
	int a,b;int max1,min1;
	cin >> a >> b;
	 min1=min(a,b);
	cout << min1 << "\t";
	 max1=max(a,b);
	max1=max1-min1;
	int t=max1/2;
	cout << t;
}