//merging and arranging in the same array
#include<stdio.h>
void merge(int a[],int l,int mid,int h)
{
  int i,j,k;
  i=l;j=mid+1;k=l;
  int b[h+1];
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
  	for(i=l;i<=h;i++)
  	a[i]=b[i];
  	//display
  	for(int i=0;i<9;i++)
  	printf("%d ",a[i]);
}
int main()
{
	int a[]={2,3,6,45,112,4,9,10,54};  //9
	merge(a,0,4,8);
	
}