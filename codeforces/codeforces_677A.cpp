//codeforces677A
#include<iostream>
using namespace std;
int main()
{
    int n,h;
    cin >> n;
    cin >> h;
    int w=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        if(a>h)
        w=w+2;
        else
        w=w+1;
        }
        cout << w;
        return 0;
}
