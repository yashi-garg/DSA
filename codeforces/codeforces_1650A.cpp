//codeforces1650A
#include<iostream>
#include<string>
using namespace std;
int main()
{
	 int t;
	 cin >> t;
	  while(t-->0)
	  {
	  	string s;
	  	 cin >> s;
	  	char ch;
	  	cin >> ch;
	  	int l=s.length();
	  	int f=0;
	for(int i=0;i<l;i++)
	{
		if(s[i]==ch && i%2==0)
		{
			f++;
			break;
		}
	}
	if(f>0)
	cout << "YES"<<endl;
	else
	cout <<"NO"<<endl;
	  }
}