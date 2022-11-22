//codeforces281A
#include<iostream>
using namespace std;
main()
{
    char ch[1000];
    cin >> ch;
    int l=sizeof(ch);
    char x=ch[0];
    if(x>='a' && x<='z')
    x=x-32;
    ch[0]=x;
    cout << ch;