//codeforces 476A
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    if(n<m)
    cout << -1;
    else
    {
        int x;
        if(n%2==0)
        {
        x=n/2;
        }
        else
        x=(n/2)+1;
        
        while(x%m!=0)
        x++;
        cout << x;
    }
}