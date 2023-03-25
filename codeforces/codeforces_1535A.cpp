//codeforces1535A
#include<bits/stdc++.h>
#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int a[4],arr[4];
        for(int i=0;i<4;i++)
        {
            cin >> a[i];
            arr[i]=a[i];
        }
        sort(arr,arr+4);
        int x[2];
        if(a[0]>a[1])
            x[0]=a[0];
        else
            x[0]=a[1];
        if(a[2]>a[3])
            x[1]=a[2];
        else
        x[1]=a[3];
        sort(x,x+2);
        int r=0;
        if(arr[2]==x[0])
        r++;
        if(arr[3]==x[1])
            r++;
        if(r==2)
            cout << "YES"<<endl;
        else
            cout << "NO"<<endl;
    }
}
