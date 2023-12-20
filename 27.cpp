#include<iostream>
using namespace std;

int main()
{
    int noelement;
    cout<<"Enter number the elements: ";
    cin>>noelement;

    int arr[noelement];

    for(int i=0;i<noelement;i++)
    {
        cout<<"Enter "<<i+1<<"st element";
        cin>>arr[i];
        arr[noelement]=arr[i];
    }
    int min=arr[noelement];
    for(int i=0;i<noelement;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"The smallest element is: "<<min;
    return 0;
}
