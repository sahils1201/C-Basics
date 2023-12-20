//mplement a program to check if a triangle with given sides is equilateral, isosceles, or scalene.
#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter length of side a: ";
    cin>>a;
    cout<<"Enter length of side b: ";
    cin>>b;
    cout<<"Enter length of side c: ";
    cin>>c;

    if(a==b&&a==c&&b==c)
    {
        cout<<"It is an equilateral triangle";
    }
    else if(a==b||a==c||b==c)
    {
        cout<<"It is an isoceles triangle";
    }
    else if(a!=b&&a!=c&&b!=c)
    {
        cout<<"It is a scalene triangle";
    }
    return 0;
}