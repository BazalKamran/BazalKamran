#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	string figure;
	float area;
	cout<<"Enter ther type of figure=";
	cin>>figure;
	
	if(figure=="square")
	{	
	float side;
	cout<<"Enter side of square =";
	cin>>side;
	area=side*side;
}
    if(figure=="rectangle")
    {
    	float length,width;
    	cout<<"enter length and width of rectangle";
    	cin>>length>>width;
    	area=length*width;
	}
    if(figure=="circle")
	{
		float radius;
		cout<<"enter radius of cirlce";
		cin>>radius;
		area = M_PI *radius *radius;
	}
    if (figure=="triangle")
    {
    	float base,height;
    	cout<<"enter base and height of triangle";
    	cin>>base>>height;
    	area= 0.5 *base *height;
	}
	cout<<"area is"<<area<<endl;
	return 0;
}
