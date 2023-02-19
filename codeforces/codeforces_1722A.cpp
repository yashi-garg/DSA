//codeforces1722A
#include<iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	 while(t-->0)
	 {
	 	int n;
	 	cin >> n;
	 	string s;
	 		 cin >> s;
	 	if(n==5)
	 	{
	 		
	 		 string st="Timur";
	 		 int arr[5]={0,0,0,0,0};
	 		 for(int i=0;i<5;i++)
	 		 {
	 		 	for(int j=0;j<5;j++)
	 		 	{
	 		 		if(st[i]==s[j])
	 		 		arr[i]++;
				  }
			  }
			  int y=0;
			  for(int i=0;i<5;i++)
			  {
			  	if(arr[i]==1)
			  	y++;
			  }
	 		if(y==5)
	 		cout << "YES"<<endl;
	 		else
	 		cout <<"NO"<<endl;
		 }
		 else
		 cout << "NO"<<endl;
		 
	 }
}