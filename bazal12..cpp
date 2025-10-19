#include<iostream>
using namespace std;
int main()
{
	int num,w,h,walls;
	cout<<"Enter a num of square meters you can print";
	cin>>num;
	cout<<"enter width of wall";
	cin>>w;
	cout<<"enter height of wall";
	cin>>h;
	walls=num/w*h;
	cout<<"number of complete walls that you can paint"<<walls<<endl;
	return 0;
}
