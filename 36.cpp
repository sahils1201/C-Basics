#include<iostream>
using namespace std;

int main()
{
    string pass;
    // pass=12345678;
    cout<<"Enter a password: ";
    cin>>pass;
    bool passtrue;
    string i;
    cout<<"Enter the set password: ";
    cin>>i;

    while(i!=pass)
    {
        cout<<"Enter correct password: ";
        cin>>i;
    }
    cout<<"Enter";
}