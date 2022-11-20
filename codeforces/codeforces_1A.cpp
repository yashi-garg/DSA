//codeforces1A
#include<iostream>
using namespace std;
main()
{
    int n,m,a;
    cin >> n;
    cin >> m;
    cin >> a;
    long long x,y,r;
    x=n/a;
    y=m/a;
    if(n%a!=0)
    x=x+1;
    if(m%a!=0)
    y=y+1;
    r=x*y;
    cout << r;
}
