#include<iostream>
using namespace std;
main()
{
    int k,n,w;
    cin >> k >> n>> w;
    for(int i=1;i<=w;i++)
{
    n=n-(i*k);
}
int x;
if(n<0)
 x=0-n;
else
x=0;
cout << x;
}