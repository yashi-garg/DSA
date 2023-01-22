//codeforces723A
#include<bits/stdc++.h>
using namespace std;
main()
{
	int x[3];int i;
	 for(i=0;i<3;i++)
	 {
	 	cin >> x[i];
	 }
	 sort(x,x+3);
	 int d=0;
	d=d+(x[2]-x[1])+(x[1]-x[0]);
	 cout << d;
}