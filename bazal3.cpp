#include<iostream>
using namespace std;
int main()
{
	float temp1,temp2;
	cout<<"Enter temp of first city=";
	cin>>temp1;
	cout<<"Enter temp of second city=";
	cin>>temp2;
	float difference= temp1 - temp2;
	if(difference > 10)
	{
		cout<<"Difference is too big";
	}
	else
	{
		cout<<"program ends";
	}
	return 0;
}
