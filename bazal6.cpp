#include<iostream>
using namespace std;
int main()
{
	float bagsize,bagcoast,areacovered;
	float coastperpound,coastpersquarefoot;
	cout<<"enter the bage size in pounds";
	cin>>bagsize;
	cout<<"enter the cost of bag";
	cin>>bagcoast;
	cout<<"enter the area in square feet covered by an bag ";
	cin>>areacovered;
	coastperpound= bagcoast/bagsize;
	coastpersquarefoot=bagcoast/areacovered;
	cout<<"coast per pound is"<<coastperpound<<endl;
	cout<<"coast per square foot is"<<coastpersquarefoot<<endl;
	return 0;
	} 
