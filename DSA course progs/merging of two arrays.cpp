//merging of two sorted arrays
#include<iostream>
using namespace std;
class merge1
{
	public:
		int a[5]={2,5,8,34,78};
		int b[5]={3,6,28,56,110};
		void merge(int m,int n)
		{
			int c[10];
			int i,j,k;
			i=j=k=0;
			while(i<m && j<n)
			{
				if(a[i]<b[j])
				c[k++]=a[i++];
				else
				c[k++]=b[j++];
			}
			for(;i<m;i++)
			c[k++]=a[i];
			for(;j<n;j++)
			c[k++]=b[j];
			for(int i=0;i<10;i++)
			cout << c[i]<<" ";
		}
};
int main()
{
	merge1 m1;
	m1.merge(5,5);
}