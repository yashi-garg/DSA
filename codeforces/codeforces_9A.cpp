//codeforces9A
#include<bits/stdc++.h>
using namespace std;
 main()
 {
 	 int Y,W;
 	 cin >> Y >> W;
 	 int m=max(Y,W);
 	 int x=6-(m-1);
 	// x=x+1;
 	 int hcf=0;
 	 int m1=min(x,6);
 	 for(int i=1;i<=m1;i++)
 	 {
 	 	if(x%i==0 && 6%i==0)
 	 	hcf=i;
	  }
	  double t=x/(6.0);
	  if(t==0)
  cout << "0/1";
  else if(t==1)
  cout << "1/1";
  else
  {
  	cout << x/hcf << "/"<<6/hcf;
  }
 	 }