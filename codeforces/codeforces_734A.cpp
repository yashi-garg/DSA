//codeforces734A
#include<iostream>
#include<string>
using namespace std;
main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a=0,d=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        a++;
        else
        d++;
    }
    if(a==d)
    cout << "Friendship";
    else if(a>d)
    cout << "Anton";
    else
    cout << "Danik";
}