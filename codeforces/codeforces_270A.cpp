//codeforces270A
#include<iostream>
#include<cmath> //for math functions
using namespace std;
 main()
 {
 	int t;
 	cin >> t;
 	 while(t-->0)
 	 {
 	 	int a;
 	 	cin >> a;
 	 	double n=(double)(360)/(180-a);
 	  double f=(double)ceil(n);
 	 	 if(f-n==0)
 	 	 cout << "YES"<< endl;
 	 	 else
 	 	 cout << "NO"<<endl;
	  }
 }