//codeforces118A
#include <bits/stdc++.h>
using namespace std;
main()
{
	string s;
	cin >> s;
	string r="";
	int i;
	 for(i=0;i<s.size();i++)
	 {
	 	if(s[i]!='a'&&s[i]!='A'&&s[i]!='y'&&s[i]!='Y'&&s[i]!='E'&&s[i]!='e'&&s[i]!='i'&&s[i]!='I'&&s[i]!='O'&&s[i]!='o'&&s[i]!='U'&&s[i]!='u')
	 	{
	 		if(s[i]>='A'&&s[i]<='Z')
	 		{
	 			s[i]=s[i]+32;
	 			r=r+"."+s[i];
			 }
			 else
			 r=r+"."+s[i];
		 }
	 }
	 cout << r;
	
}