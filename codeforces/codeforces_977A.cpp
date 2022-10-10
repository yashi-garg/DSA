//977A
#include<iostream>
using namespace std;
main()
{
    int n,k;
    cin >> n;
    cin >> k;
    for(int i=0;i<k;i++)
    {
        int h=n%10;
        if(h!=0)
        n=n-1;
        else
        n=n/10;
    }
    cout << n;
}