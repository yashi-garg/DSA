//codeforces80A
#include <iostream>

using namespace std;
int prime(int x)
{
    int c=0;
    for(int j=1;j<=x;j++)
    {
        if(x%j==0)
            c++;
    }
    if(c==2)
        return 1;
    else
        return 0;
}
int main()
{
 int n,m;
 cin >> n >> m;
 int p=0,y=0;
 for(int i=n+1;i<=m;i++)
 {
     int r=prime(i);
    // cout << "calling done"<<endl;
     if(r==1)
     {
        // cout << "prime";
         y=i;
         p++;
        break;
     }
 }
 if(p>0)
 {
   if(y==m)
        cout << "YES";
   else
    cout <<"NO";
 }
 else
    cout << "NO";

}
