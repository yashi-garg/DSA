//codeforces1352A
#include <bits/stdc++.h>
using namespace std;
main()
{
	int t;
	 cin >> t;int a[5];
	 int i,j,k;int c;
	 for(j=1;j<=t;j++)
	 {c=0;
	 	int n;
	 	 cin >> n;
	 	 int b=n;
	 	 int d=0;
	 	 while(b!=0)
	 	 {
	 	 	d++;
	 	 	b=b/10;
		  }
		  for(i=0;i<d;i++)
		  {
		  	int h=n%10;
		  	if(h!=0)
		  	{
		  		//int x=h*(pow(10,i));
		  		a[c]=h*(pow(10,i));
		  		c++;
		  	//	cout << x <<"\t";
			  }
			  n=n/10;
		  }
		  cout << c << endl;
		  for(k=0;k<c;k++)
		  cout << a[k] << "\t";
	 }
	 
}