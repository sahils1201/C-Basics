#include<iostream>
using namespace std;

int main()
{
    int num,prod=1;
    cout<<"Enter a number: ";
    cin>>num;
    int i=1;
    while(i<=num)
    {
        prod*=i;
        i++;
    }
    cout<<prod;
}