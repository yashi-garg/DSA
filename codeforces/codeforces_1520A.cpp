//codeforces1520A
#include<iostream>
using namespace std;
main()
{
	 int t;
	 cin >> t;
	  while(t-->0)
	  {
	  	int n;
	  	 cin>> n;
	  	  string s;
	  	   cin >> s; 
	  	   int g=0;
	  	   for(int i=0;i<n;i++)
	  	   {
	  	   	char ch=s[i];int a=0,b=0;int t=0;
	  	   	for(int j=i+1;j<n;j++)
	  	   	{
	  	   		if(ch==s[j])
	  	   		{
	  	   			if(b==0)
	  	   		a++;
	  	   		else
	  	   		{
			 t++;
	  	   		break;
	  	   }
			 }
	  	   
	  	   		else
	  	   		b++;
				 }
				 if(t>0)
				 g++;
				 }
				 if(g>0)
				 cout << "NO"<<endl;
				 else 
				 cout << "YES"<<endl;
	  }
}