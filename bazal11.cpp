#include<iostream>
using namespace std;
int main()
{
	int age,moves,average;
	cout<<"enter a person's age";
	cin>>age;
	cout<<"Enter number of times they've moved";
	cin>>moves;
	average=age/(moves+1);
	cout<<"average"<<average<<endl;
	return 0;
}
