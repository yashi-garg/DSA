#include<iostream>
#include <string>
using namespace std;
main()
{
    string s;
    string t;
    cin >> s >> t;
    int l=s.length();
    int c=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]==t[l-(i+1)])
        c++;
    }
    if(c==l)
    cout<<"YES";
    else
    cout << "NO";
}
//string input can be taken by using #include<string>and then that string can also be accessed as array.
