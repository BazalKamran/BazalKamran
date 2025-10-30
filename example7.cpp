#include<iostream>
using namespace std;
int main()
{
    int array[10],n;

    for(int i=0;i<10;i++)
    {
        cin>>array[i];
    }
    cout<<"enter scalar number=";
    cin>>n;

    for(int i=0;i<10;i++)
    {
        cout<<n*array[i]<<endl;
    }
    
    return 0;
}