//codeforces 577A
#include <iostream>
using namespace std;
int main() {
   int n,x;
   cin >> n >> x;
   int c=0;
   for(int i=1;i<=n;i++)
   {
       if(x%i==0 && x/i <=n)
       c++;
   }
 cout << c;
    return 0;
}