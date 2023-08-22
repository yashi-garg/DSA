//codeforces 460A
#include <iostream>
using namespace std;
int main() {
    int n,m;
     cin >> n >> m;
     int c=1;
     while(n!=0)
     {
        n--;
        if(c%m==0)
        n++;
        c++;
     }
     cout << c-1;
}