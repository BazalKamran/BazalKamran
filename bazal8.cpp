#include<iostream>
using namespace std;
int main()
{
	float veg_price,fruitprice;
	float vk,fk,totalcoins,totalRps;
	cout<<"Enter vegetable price per kilograms:";
	cin>>veg_price;
	cout<<"Enter fruit price per kilograms:";
	cin>>fruitprice;
	cout<<"Enter total kilograms of vegetables=";
	cin>>vk;
	cout<<"Enter total kilograms of fruits=";
	cin>>fk;
	totalRps= (veg_price*vk)+(fruitprice*fk)/1.94;
	cout<<"total Rps"<<totalRps<<endl;
	return 0;
	
}
