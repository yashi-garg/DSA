//codeforces1328A
#include<iostream>
using namespace std;
main()
{
	int n;
	 cin >> n;
	 int a,b,i;
	 for(i=0;i<n;i++)
	 {
	 	cin >> a >>b;
	  if(a%b==0)
	  cout << 0 << endl;
	  else 
	  {
	  	int w=a%b;
	  	cout << (b-w) << endl;
	  }
	 }
}
//code2 int this the time was exceeding
#include<iostream>
using namespace std;
main()
{
	int n;
	 cin >> n;
	 int a,b,t,i;
	 for(i=0;i<n;i++)
	 {
	 	cin >> a >>b;
		 t=0;
	 	while(a%b!=0)
	 	{
	 		a=a+1;
	 		t++;
		 }
		 cout << t << endl;
	 }
	 //for(i=0;i<n;i++)
	 //cout << x[i]<<endl;
}