#include<iostream>
using namespace std;

void sumnum(int a, int b)
{
    int sum;
    sum=a+b;
    cout<<"The sum of "<<a<<" and " <<b<<" is :"<<sum;
}

int main()
{
    int n,m;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter a number: ";
    cin>>m;
    sumnum(n,m);
}