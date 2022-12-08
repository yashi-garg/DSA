//codeforces758A
#include<iostream>
using namespace std;
main()
{
	int n,i;
	 cin >> n;
	 int a[n];
	 for(i=0;i<n;i++)
	 {
	 	cin >> a[i];
	 }
	 int l=a[0];
	 for(i=0;i<n;i++)
	 {
	 	if(a[i]>l)
	 	l=a[i];
	 }
	 int sum=0;
	 for(i=0;i<n;i++)
	 {
	 	sum=sum+(l-a[i]);
	 }
	 cout << sum;
}