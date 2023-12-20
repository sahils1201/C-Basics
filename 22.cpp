#include<iostream>
using namespace std;

int main()
{
    int noelement,avg,sum=0;
    cout<<"Enter number the elements: ";
    cin>>noelement;

    int arr[noelement];

    for(int i=0;i<noelement;i++)
    {
        cout<<"Enter "<<i+1<<"st element";
        cin>>arr[i];
        sum+=arr[i];
    }
    avg=sum/noelement;
    cout<<"The average of the elements is: "<<avg;
}


