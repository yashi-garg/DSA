//codeforces474A
#include<bits/stdc++.h>

using namespace std;
int main()
{
	string k="qwertyuiopasdfghjkl;zxcvbnm,./";
	char ch;
	cin >> ch;
	string s;
	cin >> s;
	int l=s.length();
	int l1=k.length();
	if(ch=='R')
	{
		for(int i=0;i<l;i++)
		{
			for(int j=0;j<l1;j++)
			{
		       if(s[i]==k[j])
		       cout << k[j-1];
			}
		}
	}
	if(ch=='L')
	{
		for(int i=0;i<l;i++)
		{
			for(int j=0;j<l1;j++)
			{
		       if(s[i]==k[j])
		       cout << k[j+1];
			}
		}
	}
	
	 }
