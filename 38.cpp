#include<iostream>
using namespace std;

int main()
{
    int noelement;
    cout<<"Enter number the elements: ";
    cin>>noelement;

    int arr[noelement];
    int max=0;
    int i=0;

    while(i<noelement)
    {
        cout<<"Enter "<<i+1<<"st element";
        cin>>arr[i];
        i++;
    }
    int j=0;
    while(j<noelement)
    {
        j++;
        if(arr[j]>max)
        {
            max=arr[j];
        }
    }
    cout<<"The largest element is: "<<max;
}