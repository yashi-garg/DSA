//codeforces1370A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<n/2<<endl;
    }

    return 0;
}
/*int this the time limit exceeded for very big inputs
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	int h=0;int min=0;
	if(a<b)
	min=a;
	else
	min=b;
	for(int i1=1;i1<=min;i1++)
	{
		if(a%i1==0 && b%i1==0)
		h=i1;
	}
return h;	
}
main()
{
	int t,i,j,k;
	 cin >> t;
	 for(i=0;i<t;i++)
	 {
	 	int n;
	 	cin >> n;
		 int maxh=0;
	 	 for(j=1;j<=n;j++)
	 	 {
	 	 	for(k=1;k<=n;k++)
	 	 	{
	 	 		if(j==k)
	 	 		continue;
	 	 		else
	 	 		{
	 	 		int r=gcd(k,j);
	 	 	   if(r>maxh)
	 	 	   maxh=r;
	 	 }
	 	  }
		  }
		  cout << maxh << endl;
	}
}
*/