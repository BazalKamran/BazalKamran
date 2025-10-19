#include<iostream>
using namespace std;
int main()
{
	string name;
	int atp,ctp,ats,cts,donation_percent;
	cout<<"enter adult ticket price";
	cin>>atp;
	cout<<"enter adult ticket sold";
	cin>>ats;
	cout<<"enter child ticket price";
	cin>>ctp;
	cout<<"enter child ticket sold";
	cin>>cts;
	cout<<"enter percentage to be donated to charity";
	cin>>donation_percent;
	int totalsales;
	totalsales=(atp*ats)+(ctp*cts);
	double charityamount;
	charityamount= (totalsales*donation_percent)/100.0;
	cout<<"total sales"<<totalsales<<endl;
	cout<<"charity amount"<<charityamount<<endl;

	return 0;
	
	
}
