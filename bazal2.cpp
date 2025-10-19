#include<iostream>
using namespace std;
int main()
{
	int speed;
	cout<<"Enter speed of car:";
	cin>>speed;
	if(speed > 100)
	{
		cout<<"halt--You will be challaned";
	}
	if(speed < 100)
	{
	    cout<<"perfect! you are going good";
    }
	return 0;
}
