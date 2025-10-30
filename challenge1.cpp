#include<iostream>
using namespace std;
int main()
{
    int array[10];
    for(int i=0;i<10;i++)
    {
    cout<<"Enter numbers";
    cin>>array[i];
    }
    for(int i=0;i<10;i++)
    {
        cout<<array[i];
    }
    cout<<"numbers in reverse order";
    for(int j=9;j>=0;j--)
    {

    cout<<array[j];
    }
    return 0;




}