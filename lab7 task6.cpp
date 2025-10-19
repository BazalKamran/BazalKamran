#include<iostream>
using namespace std;
int main()
{
    int num,mul=1;
    cout<<"enter number=";
    cin>>num;
    for(int i=1;i<=10;i++)
    {
    	mul= num*i;
         cout << num << " x " << i << " = " << num * i << endl;
    }
    return 0;
}
