//iterative merge sort technique
#include<iostream>
void merge(int a[],int l,int mid,int h)
{
	int i,j,k;
	int b[h+1];
	i=l;
	j=mid+1;
	k=l;
	while(i<=mid && j<=h)
	{
		if(a[i]<a[j])
		b[k++]=a[i++];
		else
		b[k++]=a[j++];
	}
	for(;i<=mid;i++)
	b[k++]=a[i];
	for(;j<=h;j++)
	b[k++]=a[j];
	for(int i=l;i<=h;i++)
	a[i]=b[i];
}
void imergesort(int a[],int n)
{
	int i,p,l,mid,h;
	for(p=2;p<=n;p=p*2)
	{
		for(i=0;i+p-1<n;i=i+p)
		{
			l=i;
			h=i+p-1;
			mid=(l+h)/2;
			merge(a,l,mid,h);
		}
	}
	if(p/2<n)
	merge(a,0,p/2-1,n-1);
}
int main()
{
	int a[]={11,13,5,3,9,56,23,78,67,1};int n=10;
	int i;
	imergesort(a,n);
	for(int i=0;i<10;i++)
	printf("%d ",a[i]);
}
}