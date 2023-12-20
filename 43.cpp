#include<iostream>
using namespace std;

int main()
{
    int secnum=123;
    int num;
    int count=3;
    int i;
    while(i!=num)
    {
        cout<<"Enter number: ";
        cin>>i;
        if(i!=num)
        {
            count--;
        }
    }
    if(count==0)
    {
        cout<<"Game over yede!!";
    }
    else
    {
        cout<<"Sahi number yede!!";
    }
    return 0;
}