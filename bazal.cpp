#include<iostream>
using namespace std;
int main()
{
	string name;
	int ticketprice,country,ireland,anycountry;
	double discount;
	cout<<"Enter the country name";
	cin>>name;
	cout<<"Enter ticket price in (dollars) ";
	cin>>ticketprice;
	if(country==ireland){
    discount= ticketprice -(ticketprice * 0.1);
		cout<<"final price after discount"<<discount<<endl;
    }
	if(country==anycountry)
	{
		discount= ticketprice-(0.05 * ticketprice);
		cout<<"final price after discount"<<discount<<endl;
	  }  
	  return 0;
}
