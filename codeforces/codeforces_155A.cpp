//codeforces155A
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	int u=0,l=0;int t=0;
	for(int i=1;i<n;i++)
	{
		u=0;l=0;
		for(int j=0;j<i;j++)
		{
			if(arr[i]>arr[j])
			u++;
			if(arr[i]<arr[j])
			l++;
		}
		if(u==i || l==i)
		t++;
	}
	cout << t;
	
}