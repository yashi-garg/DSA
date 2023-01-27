//codeforces1294A
#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	 cin >> t;
	 while(t-->0)
	 {
	 	int a[3],n;
	 for(int i=0;i<3;i++)
	 cin >> a[i];
	 cin >> n;
	 sort(a,a+3);
	 int dif=(a[2]-a[0])+(a[2]-a[1]);
	 if(dif <= n)
	 {
	 int r=n-dif;
	 	 if(r%3==0)
	 cout << "YES" << endl;
	 else
	 cout << "NO"<< endl;
	 	
	 }
	 else
	 cout << "NO"<<endl;
	     
	 }
}