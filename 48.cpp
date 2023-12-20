#include<iostream>
using namespace std;

void isprime(int a)
{
    int count=0;
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {   
            count++;
            break;
        }
    }
    if(count==0)
    {
        cout<<"Number is prime";
    }
    else
    {
        cout<<"Number is not prime";
    }
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    isprime(num);
}