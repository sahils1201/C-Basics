#include<iostream>
using namespace std;

void powerno(int num, int pow)
{
    int prod=1;
    int i;
    for(i=1;i<=pow;i++)
    {
        prod*=num;
    }
    cout<<prod;
}
int main()
{
    int numb;
    int p;
    cout<<"Enter number: ";
    cin>>numb;
    cout<<"Enter power: ";
    cin>>p;
    powerno(numb,p);
}