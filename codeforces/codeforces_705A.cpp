//codeforces705A
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i;
    for( i=1;i<n;i++)
    {
        if(i%2!=0)
        cout << "I hate that ";
        else
        cout << "I love that ";
    }
    if(i%2==0)
    cout << "I love it";
    else
    cout<<"I hate it";
    return 0;
}