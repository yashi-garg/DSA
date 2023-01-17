//codeforces785A
#include<iostream>
#include<string>
using namespace std;
main()
{
    int n;
    cin >> n;
    int sum=0;
    int i;
    for(i=1;i<=n;i++)
    {
        string s;
        cin >> s;
        if(s=="Cube")
        sum=sum+6;
        else if(s=="Tetrahedron")
        sum=sum+4;
        else if(s=="Octahedron")
        sum=sum+8;
        else if(s=="Dodecahedron")
        sum=sum+12;
        else if(s=="Icosahedron")
        sum=sum+20;
         }
         cout << sum;
}
