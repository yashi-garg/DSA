//codeforces1729A
#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>> t;
	while(t-->0)
	{
		int a,b,c;
		cin >> a >> b >> c;
		int t1=abs(a-1);
		int t2=abs(b-c)+abs(c-1);
		if(t1<t2)
		cout << "1" << endl;
		else if(t2<t1)
		cout << "2" << endl;
		else if(t1==t2)
		cout << "3" << endl;
	}
}