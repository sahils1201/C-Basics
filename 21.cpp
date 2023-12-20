#include<iostream>
using namespace std;

int main()
{
    int range,counter=0,sum=0;
    cout<<"Enter Number: ";
    cin>>range;



    for(int i=2; i<=range ;i++)
    {
        if(i%3==0||i%5==0)
        {
            sum+=i;
        }
    }
    cout<<sum;
}
