//codeforces1669A
#include<iostream>
using namespace std;
int main()
{
    int t;
     cin >> t;
     while(t-->0)
     {
         int rating;
          cin >> rating;
          if(rating <=1399)
          cout << "Division 4"<<endl;
          else if(rating >=1400 && rating <=1599)
          cout <<"Division 3"<<endl;
          else if(rating >=1600 && rating <=1899)
          cout << "Division 2"<<endl;
          else
          cout << "Division 1"<<endl;
     }
}