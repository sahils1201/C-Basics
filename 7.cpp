//Leap year
#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter a year: ";
    cin>>a;

    if(a%4==0 && a%100!=0 || a%400==0)
    {
        cout<<"It is a leapyear.";
    }
    else
    {
        cout<<"Not a leapyear";

    }
    return 0;
}