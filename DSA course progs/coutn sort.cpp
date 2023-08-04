//count sort
#include<iostream>
using namespace std;
 class sort{
 	int arr[10];
 	public:
 		void create()
 		{
 			for(int i=0;i<10;i++)
 			{
 				cout << "enter a value"<<endl;
 				cin >> arr[i];
			 }
		 }
 		void countSort()
 		{
 			int max;
 			int *C;
 			max= findMax();
 			C=new int[max+1];
 			//initializing by zero the count array
 			for(int i=0;i<max+1;i++)
 			{
 				C[i]=0;
			 }
			 for(int i=0;i<10;i++)
			 {
			 	C[arr[i]]++;
			 }
			 int i=0,j=0;
			 while(i<max+1)
			 {
			 	if(C[i]>0)
			 	{
			 		arr[j++]=i;
			 		C[i]--;
				 }
				 else
				 i++;
			 }
			 //display
			 for(int i=0;i<10;i++)
			 {
			 	cout << arr[i]<<" ";
			 }
 			
		 }
		 int findMax()
		 {
		 	int m=0;
		 	for(int i=0;i<10;i++)
		 	{
		 		if(arr[i]>m)
		 		m=arr[i];
			 }
			 return m;
		 }
 };
 int main()
 {
 	sort obj;
 	obj.create();
 	obj.countSort();
 }