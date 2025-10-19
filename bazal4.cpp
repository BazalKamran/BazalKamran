#include<iostream>
using namespace std;
int main()
{
	int redroses,whiteroses,tulips;
	float totalprice;
	cout<<"Enter number of red roses=";
	cin>>redroses;
	cout<<"Enter number of white roses=";
	cin>>whiteroses;
	cout<<"Enter number of tulips=";
	cin>>tulips;
	float discount;
    totalprice= (redroses*2.00) + (whiteroses*4.15) + (tulips*2.50);
	
	if(totalprice > 200)
	{
	discount= totalprice -(totalprice*0.2);
	cout<<"Total price="<<totalprice<<endl;
	cout<<"price after discount"<<discount<<endl;
     }
	 elsenn
	 cout<<"Total price"<<totalprice<<endl;
	 return 0;  
	}
