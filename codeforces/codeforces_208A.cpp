//codeforces 208A
#include<iostream>
using namespace std;
int main()
{
	string s;
	 cin >> s;int f=1;
	 int l=s.length();
	 string r="";
	 for(int i=0;i<l;i++)
	 {
	 	if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
	 	{
	 		i=i+2;
	 		if(!f)
	 		{
	 			cout << " ";
			 }
			 continue;
		 }
		 else
		 {
		 	f=0;
		 	cout << s[i];
		 }
	 }
	 
}