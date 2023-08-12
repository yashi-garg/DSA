//codeforces96A
#include<iostream>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int l=s.length();
	int f=0;
	for(int i=0;i<l;i++)
	{
		char c=s[i];
		char c1=s[i+1];
		if(c==c1)
		{
		f++;
		if(f==6)
		break;
	}
	else
	f=0;
}
if(f==6)
cout <<"YES"<<endl;
else
cout << "NO"<<endl;
	}