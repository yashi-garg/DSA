//codeforces510A
#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>> n>>m;
	int t=0;
	for(int i=1;i<=n;i++)
	{
		t=t+1;
		for(int j=1;j<=m;j++)
		{
			if(i%2!=0)
			{
				cout <<"#";
			}
			else if(i%2==0)
			{
				if(t%2==0 && t%4!=0)
				{
				 if(j==m)
				cout << "#";
				else if(j!=m)
				cout <<".";
				}
				else if(t%2==0 && t%4==0){
					if(j==1)
					cout << "#";
					else if(j!=1)
					cout <<".";
				}
				
			}
		}
		
		cout <<"\n";
		
	}
	
}