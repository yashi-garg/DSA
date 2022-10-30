//codeforces467A
#include<iostream>
using namespace std;
main()
{
    int n;
    cin >> n;
    int c=0;
    for(int i=1;i<=n;i++)
    {
        int p,q;
        cin >> p;
        cin >> q;
        int r=q-p;
        if(r>=2)
        c++;
    }
    cout << c;
    
}