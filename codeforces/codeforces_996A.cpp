//codeforces996A
#include<iostream>
using namespace std;
main()
{
	int n;
	cin >> n;
	int s=0;
	int h=n/100;
	n=n%100;
	int t=n/20;
	n=n%20;
	int ten=n/10;
	n=n%10;
	int f=n/5;
	n=n%5;
	int o=n/1;
	s=h+t+ten+f+o;
	cout<<s;
}