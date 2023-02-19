//codeforces1760A
#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while(t-->0)
    {
        int arr[3];
        cin >> arr[0]>> arr[1]>> arr[2];
        sort(arr,arr+3);
        cout << arr[1]<<endl;
        
    }
}