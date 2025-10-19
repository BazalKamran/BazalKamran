#include<iostream>
using namespace std;
int main()
{
	int n,th,H,T,U,rem,add;
	cout<<"enter 4 digit number=";
	cin>>n;
	th= n/1000;
	rem=n%1000;
	H=rem/100;
	rem=rem%100;
	T=rem/10;
	U=rem%10;
	add=th+H+T+U;
	cout<<"addition is ="<<add<<endl;
	return 0;
}
