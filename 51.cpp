#include<iostream>
using namespace std;

int factorial(int facn)
{
    int prod=1;
    if(facn>1)
    {
        return facn*factorial(facn-1);
    }
    else{
        return 1;
    }
    // for(int i=1;i<=facn;i++)
    // {
    //     prod*=i;
    // }
}
int main()
{
    int f;
    cout<<"Enter a number: ";
    cin>>f;
    cout<<factorial(f);
}