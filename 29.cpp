//Fibonacci sequence
#include<iostream>
using namespace std;

int main()
{
    int num,sum,prenum=0;
    cout<<"Enter a number: ";
    cin>>num;
    sum=0;
    int a=0,b=1;

    for(int i=0;i<num;i++)
    {
        cout<<a<<" ";
        int sum=a+b;
        a=b;
        b= sum;
        // cout<<sum<<" ";
    }
    return 0;
}