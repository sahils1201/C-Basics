#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter number: ";
    cin>>a;

    if(a%2==0)
    {
        cout<<"Number is even.";
    }
    else
    {
        cout<<"Number is odd.";
    }
    return 0;

}

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a,rem;
//     cout<<"Enter number: ";
//     cin>>a;
//     rem=a%2;
//     cout<<rem;
// }