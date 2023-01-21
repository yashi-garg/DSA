//codeforces432A
#include<bits/stdc++.h>
using namespace std;
 main()
 {
 	int n,k,i;
 	 cin >> n >> k;
 	int y[2000];
 	for(i=0;i<n;i++)
 	cin >> y[i];
 	int f=0;int d=5-k;
 	for(i=0;i<n;i++)
 	{
 		if(y[i]<=d)
 		f++;
 	}
 	cout << (f/3);
 }