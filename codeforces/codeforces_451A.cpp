//codeforces 451A
#include<iostream>
using namespace std;
 int main()
 {
 	int n,m;
 	cin >> n >> m;
 	int sum=n+m;
 	int i=n*m;
 	int c=0;
 	while(i!=0)
 	{
 		i=i-(sum-1);
 		sum=sum-2;
 		c++;
 		
	 }
	 if(c%2==0)
	 cout <<"Malvika"<<endl;
	 else
	 cout << "Akshat"<<endl;
 }