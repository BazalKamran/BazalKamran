#include<iostream>
using namespace std;
int main()
{
    int array[10],n,i;
    int flag=0;
    for(i=0;i<10;i++){
    cout<<"enter value";
    cin>>array[i];}


    cout<<"enter value you want to find";
    cin>>n;

    for(i=0;i<10;i++)
    {
        if(array[i]==n)
        {
            flag==1;
            break;
        }
    }
    if(flag==1)
    cout<<"value found"<<n<<endl;
    else
    cout<<"not found"<<n<<endl;
    return 0;
}