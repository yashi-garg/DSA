//codeforces742A
#include<bits/stdc++.h>
using namespace std;
main()
{
	int n;
	 cin >> n;
	 if(n%4==0)
	 cout << 6;
	else if(n%4==1)
	 cout << 2;
	 else if(n%4==2)
	 cout << 4;
	 else if(n%4==3)
	 cout << 8;
}