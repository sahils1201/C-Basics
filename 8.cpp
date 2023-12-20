#include<iostream>
using namespace std;

int main()
{
     int a,b,c;
    cout<<"Enter number a: ";
    cin>>a;
    cout<<"Enter number b: ";
    cin>>b;
    cout<<"Enter number c: ";
    cin>>c;


    if(a==b && a==c && b==c)
    {
        cout<<"All numbers are equal.";
    }
    else
    {
        if(a>=b&&a>=c)
        {
            cout<<a<<"is the greatest number.";
        }
        if(b>=a&&b>=c)
        {
            cout<<b<<"is the greatest number.";
        }
        if(c>=b&&c>=a)
        {
            cout<<c<<"is the greatest number.";
        }
    }
    // if(a>=b&&a>=c)
    // {
    //     cout<<a<<"is the greatest number.";
    // }
    // if(b>=a&&b>=c)
    // {
    //     cout<<b<<"is the greatest number.";
    // }
    // if(c>=b&&c>=a)
    // {
    //     cout<<c<<"is the greatest number.";
    // }
    return 0;

}





