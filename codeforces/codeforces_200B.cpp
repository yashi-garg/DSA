//codeforces200B
#include<iostream>
using namespace std;
main()
{
int n;int i;double p;double x=0.0;
cin >> n;
for(i=0;i<n;i++)
{
cin >> p;
x=x+(p/100);
}
cout << ((x/n)*100);
}
