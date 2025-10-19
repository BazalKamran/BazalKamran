#include<iostream>
using namespace std;
int main()
{
	int minutes,fps,totalframes;
	cout<<"enter a number of minutes";
	cin>>minutes;
	cout<<"enter a frame per second";
	cin>>fps;
	totalframes= minutes*fps*60;
	cout<<"total number od frames"<<totalframes<<endl;
	return 0 ;
	
	
}
