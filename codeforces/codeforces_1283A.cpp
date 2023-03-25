//codeforces1283A
#include <iostream>

using namespace std;

int main()
{
    int t;
     cin >> t;
     while(t-->0)
     {
         int h ,m;
         cin >> h >> m;
         int min=0;
         min=min+(60-m);
         min=min+((24-(h+1))*60);
         cout << min << endl;
     }
}
