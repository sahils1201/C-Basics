#include<iostream>
using namespace std;

int main()
{
    int range;
    int i=1;
    int sum=0;
    cout<<"Enter range: ";
    cin>>range;


    while(i<=range)
    {
        sum=sum+i;
        i++;
    }
    cout<<sum;
}