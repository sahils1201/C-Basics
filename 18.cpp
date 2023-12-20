#include<iostream>
using namespace std;

int main()
{
    int a,prod=1;
    cout<<"Enter Number: ";
    cin>>a;

    for(int i=a; i>=1;i--)
    {
        prod=prod*i;
    }
    cout<<"The factorial is "<<prod;
}
