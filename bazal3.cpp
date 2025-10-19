#include<iostream>
using namespace std;
int main()
{
	float vi,acc,t,vf;
	cout<<"enter initial velocity";
	cin>>vi;
	cout<<"enter time";
	cin>>t;
	cout<<"enter acceleration";
	cin>>acc;
	vf= vi+ acc*t;
	cout<<"the final velocity is"<<vf<<endl;
	return 0;
	
	
}
