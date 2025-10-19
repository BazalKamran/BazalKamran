#include<iostream>
using namespace std;
int main()
{
    char ch='y';
    while(ch!='N' && ch!='n')
    {
        cout<<"welcome"<<endl;
        cout<<"press N for exit or any other key to continue";
        cin>>ch;
    }
    return 0;
}
