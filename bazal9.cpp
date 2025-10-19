#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,sum,sub,mul,result,finalresult;
	cout<<"Enter 15 numbers=";
	cin>>n1;
	cin>>n2;
	cin>>n3;
	cin>>n4;
	cin>>n5;
	cin>>n6;
	cin>>n7;
	cin>>n8;
	cin>>n9;
	cin>>n10;
	cin>>n11;
	cin>>n12;
	cin>>n13;
	cin>>n14;
	cin>>n15;
	sum=n1+n2+n3+n4+n5;
	sub=n6-n7-n8-n9-n10;
	mul=n11*n12*n13*n14*n15;
	result=sum,sub,mul;
	finalresult=(sum + mul)-sub;
	cout<<"final result"<<finalresult<<endl;
	return 0;
}
