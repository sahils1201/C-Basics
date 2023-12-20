//Write a program check if a no. Is prime or not.
#include<iostream>
using namespace std;

int main()
{
    int a,i;
    int count=0;
    cout<<"Please enter number: ";
    cin>>a;

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
