//codeforces231A
#include<iostream>
using namespace std;
main()
{
    int n;
    cin >>n;
    int a =0;
    int f=0;
    for(int i=0;i<n;i++)
    {
        a=0;
        int h1;
        cin >> h1;
        if(h1==1)
        a++;
        int h2;
        cin >> h2;
        if(h2==1)
        a++;
        int h3;
        cin >> h3;
        if(h3==1)
        a++;
        if(a>=2)
        f++;
        }
        cout << f;
}