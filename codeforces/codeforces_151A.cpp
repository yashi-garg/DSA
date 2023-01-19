//codeforces151A
#include <iostream>
 
using namespace std;
 
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << min(min(k * l / nl, c * d), p / np) / n << endl;
    return 0;
}
//mycode
#include<bits/stdc++.h>
using namespace std;
main()
{
	int n,k,l,c,d,p,nl,np;
	cin >>n>>k>>l>>c>>d>>p>>nl>>np; //input
	int total_drink=k*l;
	int total_slices=c*d;
	int drinkper=total_drink/nl;
    int saltper=p/np;
    int min1;
    if(drinkper<=saltper && drinkper<=total_slices)
    min1=drinkper;
    else if(saltper<=drinkper && saltper<=total_slices)
    min1=saltper;
    else if(total_slices<=drinkper && total_slices<=saltper)
    min1=total_slices;
    cout << min1/n;
    
}
