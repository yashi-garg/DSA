#include<iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if(x>5)
    {
         if(x%5==0)
    {
        int s1=x/5;
        cout << s1;
    }
    else
    {
    int sum=x/5;
    cout << (sum+1);
    }
    }
    
    else
    cout << "1";
    return 0;
}