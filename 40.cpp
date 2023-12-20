#include<iostream>
using namespace std;

int main()
{
    int range;
    cout<<"Enter the range: ";
    cin>>range;
    int a=0;
    int b=1;
    int i=0;
    int sum;
    cout<<a<<b;
    while(i<range-2)
    {
     // a=b;
        sum=a+b;
        a=b;
        b=sum;
        i++;
        cout<<sum;
    }

}