//codeforces486A
#include <cmath>
#include <iostream>
using namespace std;
 
int main()
{
    long long n, a;
    cin >> n;
    if(n % 2 == 0) a = n / 2;
    else a = ((n + 1) / 2) * (-1);
    cout << a << endl;
    return 0;
}
//when we write this no other header files need to be declared #include<bits/stdcc++.h>