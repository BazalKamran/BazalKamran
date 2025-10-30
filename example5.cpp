#include<iostream>
using namespace std;
int main()
{
    int numbers[]={23,4,6,8,9,24};
    int sum=0;
    double average;

    for(int i=0;i<6;i++)
    {
        cout<<numbers[i];
        sum=sum+numbers[i];
    }
    average=sum/6.0;
    cout<<"sum is"<<sum<<endl;
    cout<<"average is"<<average<<endl;
    return 0;
}
