#include<iostream>
using namespace std;

int main()
{
    int a,sum=0;
    cout<<"Enter Number: ";
    cin>>a;

    for(int i=0; i<=a;i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }
    cout<<"The sum of all even nos is:"<<sum; 
    return 0;
}