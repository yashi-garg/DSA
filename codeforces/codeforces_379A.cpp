//codeforces379A
 #include<bits/stdc++.h>
using namespace std;
main()
{
	int a,b;
	 cin >> a >> b;
	 int s=a;
	 while(a>=b)
	 {
	 	int t=a%b;
	 	a=a/b;
	 	s=s+a;
	 	a=a+t;
	 }
	 cout << s;
}