//codeforces 1560A
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--!=0)
	{
	 int k;
	  cin >> k;
	bool c=true; int i=1;int f=0; int r;
	while(c==true)
	{
	int d=i%10;
	if(d!=3 && i%3!=0)
	{
		r=i;f++; 
		i++;
		if(f==k)
		{
			break;
		}
		}
		else
		{
			i++;
			}	
	}
	cout << r << endl;
}
}