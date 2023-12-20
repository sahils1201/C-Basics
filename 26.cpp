#include<iostream>
using namespace std;

int main()
{
    int noelement;
    cout<<"Enter number the elements: ";
    cin>>noelement;

    int arr[noelement];
    int max=0;

    for(int i=0;i<noelement;i++)
    {
        cout<<"Enter "<<i+1<<"st element";
        cin>>arr[i];
    }
    for(int i=0;i<noelement;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"The largest element is: "<<max;


}









