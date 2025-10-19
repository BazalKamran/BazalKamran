#include<iostream>
using namespace std;
int main()
{
	float impostercount,playercount,chance;
	cout<<"Enter a imposter count";
	cin>>impostercount;
	cout<<"Enter a player count";
	cin>>playercount;
	chance= 100*impostercount/playercount;
	cout<<"chance of being imposter %"<<chance<<endl;
	return 0;
}
