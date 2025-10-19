#include<iostream>
using namespace std;
int main()
{
	string name;
	int weightloss,requireddays;
	cout<<"enter a name";
	cin>>name;
	cout<<"enter the target weight loss in kg";
	cin>>weightloss;
	requireddays= weightloss*15;
	cout<<"amir will need"<< requireddays<<"days to target weight loss"<<endl;
	return 0;
	
	
	
}
