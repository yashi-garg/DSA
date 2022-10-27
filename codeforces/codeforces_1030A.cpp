//codeforces1030A
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i;int c=0;
    for(int j=1;j<=n;j++)
    {
        cin >> i;
        if(i==1)
        c++;
    }
    if(c>0)
    cout << "HARD";
    else
    cout << "EASY";
    return 0;
    
}