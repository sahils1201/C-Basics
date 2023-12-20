#include<iostream>
using namespace std;

void leapyear(int year)
{
    if((year%4==0&&year%100!=0)||(year%400==0))
    {
        cout<<year<<" is a leap year.";
    }
    else
    {
        cout<<year<<" is not a leap year.";
    }
}
int main()
{
    int y;
    cout<<"Enter a year to check: ";
    cin>>y;
    leapyear(y);
}