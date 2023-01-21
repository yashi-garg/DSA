//codeforces1409A
#include<iostream>
using namespace std;
main()
{
	int t;int i,j;
	 cin >> t;
	 for(j=1;j<=t;j++)
	 {
	  int a,b;
	   cin >> a >> b;
	    int s=0;
	    if(a>b)
	    {
	    	int d=a-b;
	    	for(i=10;i>=1;i--)
	    	{
	    		s=s+(d/i);
	    		d=d%i;
			}
		}
		else 
		{
			int d=b-a;
	    	for(i=10;i>=1;i--)
	    	{
	    		s=s+(d/i);
	    		d=d%i;
			}
			
		}
		cout << s << endl;
		
}
}