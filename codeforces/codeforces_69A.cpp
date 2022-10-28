//codeforces69A
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int rx=0,ry=0,rz=0;
    for(int i=0;i<n;i++)
    {
        int x,y,z;
        cin >> x;
        cin >> y;
        cin >> z;
        rx=rx+x;
        ry=ry+y;
        rz=rz+z;
    }
    if(rx==0 && ry==0 && rz==0)
    cout << "YES";
    else
    cout << "NO";
    return 0;
}