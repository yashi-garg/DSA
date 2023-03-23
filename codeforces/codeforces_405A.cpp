//codeforces405A
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		int a;
		 cin >>a;
		 arr[i]=a;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-(i+1);j++)
		{
			if(arr[j]>arr[j+1])
			{
				int t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout << arr[i]<<" ";
	}
	
}