//Nega,posi or zero
#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;

    if(a==0)
    {
        cout<<"The number is zero.";
    }
    else if(a<0)
    {
        cout<<"The number is negative.";
    }
    else if(a>0)
    {
        cout<<"The number is positive.";
    }
    return 0;
}