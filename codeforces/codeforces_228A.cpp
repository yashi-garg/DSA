//codeforces228A
#include<iostream>
using namespace std;
main()
{
 int s[4];int i;
 for(i=0;i<4;i++)
 {
 	cin >> s[i];
 }
 int c=0;int j;
 for(i=0;i<4;i++)
 {
 	int p=0;
 	for(j=i-1;j>=0;j--)
 	{
 		if(s[j]==s[i])
 		p++;
	 }
	 if(p==0)
	 c++;
 }
 int r;
 r=4-c;
 cout << r;
}
 