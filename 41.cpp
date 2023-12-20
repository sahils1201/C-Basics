#include<iostream>
using namespace std;

int main()
{
    int num;
    int i=2;
    int count=0;
    cout<<"Enter number: ";
    cin>>num;

    while(i<=num/2)
    {   
        if(num%i==0)
        {
            count++;
            break;
        }
        i++;
    }
    if(count==0)
    {
        cout<<"Numer is prime.";
    }
    else
    {
        cout<<"Numer is not prime.";
    }
    return 0;
}