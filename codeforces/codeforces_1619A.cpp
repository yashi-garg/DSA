//codeforces1619A
#include<bits/stdc++.h>
using namespace std;
 main()
 {
 	 int t;
 	 cin >> t;
 	 while(t-->0)
 	 {
 	 	string s;
 	 	cin >> s;
 	 	 int l=s.length();
 	 	 if(l%2!=0)
 	 	 {
 	 	 	cout << "NO" << endl;
		   }
		   else
		   {
		   	string r1=s.substr(0,l/2);
		   	string r2=s.substr(l/2,l/2);
		   	if(r1.compare(r2)==0)
		   	cout << "YES"<<endl;
		   	else
		   	cout << "NO"<<endl;
		   }
	  }
 }