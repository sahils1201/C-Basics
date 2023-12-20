#include<iostream>
using namespace std;

int main()
{
    int a,prod;
    cout<<"Enter Number: ";
    cin>>a;

    for(int i=1;i<11;i++)
    {
        prod=a*i;
        cout<<prod<<endl;
    }
    return 0;
    
}