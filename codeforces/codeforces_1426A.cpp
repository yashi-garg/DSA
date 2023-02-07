//codeforces1426A
#include<iostream>
using namespace std;
int main()
{
	int t;
	 cin >> t;
	 while(t-->0)
	 {
	 	int n,x;
	 	cin >> n >> x;
	 	 int c=2;
	 	 int ans=1;
	 	 while(c<n)
	 	 {
	 	 	c=c+x;
	 	 	ans++;
		  }
		  cout << ans << endl;
	 }
}