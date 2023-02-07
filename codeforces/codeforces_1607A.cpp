//codeforces1607A
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	 cin >> t;
	  while(t-->0)
	  {
	 string k,s;
	 cin >> k;
	 cin >> s;
	 int l=s.length();
	 if(l==1)
	 cout << 0 << endl;
	 else
	 {
	int arr[l];
	for(int j=0;j<l;j++)
	{
	for(int i=0;i<26;i++)
	{
		if(s[j]==k[i])
		{
			arr[j]=i+1;
			break;
		}
	}
	  }
	  int sum =0;
	  for(int i=0;i<l-1;i++)
	  {
	  	sum=sum+abs(arr[i]-arr[i+1]);
	  }
	  cout << sum << endl;
}
}
}