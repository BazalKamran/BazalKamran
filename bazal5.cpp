#include<iostream>
using namespace std;
int main()
{
	int holidays;
	cout<<"Enter number of holidays=";
	cin>>holidays;
	int working_days= 365-holidays;
	int total_play= (working_days*63)+(holidays*127);
	int difference= 30000-total_play;
	int hours= difference/60;
	int minutes= difference%60;
	
	if(total_play > 30000)
	{
	cout<<"tom will run away"<<endl;
	cout<<hours<<"hours"<<"and"<<minutes<<"minutes"<<"less for play";}
	else
	{
		cout<<"tom sleeps well"<<endl;
		cout<<hours<<"hours"<<"and"<<minutes<<"hours"<<"more for play";}
		return 0;
	}
