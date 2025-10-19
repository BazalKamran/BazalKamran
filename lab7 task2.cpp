#include<iostream>
using namespace std;
int main()
{
    int num , sum=0;
    while(num>=0)
    {
    	sum = sum + num;
        cout<<"enter a num=";
        cin>>num;
    }
    cout<<"sum"<<sum<<endl;
    return 0;
}
