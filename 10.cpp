//Write a program to calculate to the discount based on purchase amount.
#include<iostream>
using namespace std;

int main()
{
    int a, amount;
    double dis;
    cout<<"Enter amount: ";
    cin>>a;

    if(a<=10000)
    {
        cout<<"You are eligible for a 5 percent discount"<<endl;
        dis=a*5/100;
        cout<<"Your discount is Rs"<<dis<<endl;
        amount=a-dis;
        cout<<"You have to pay Rs"<<amount;
    }
    else if(a<=25000&&a>10000)
    {
        cout<<"You are eligible for a 14 percent discount"<<endl;
        dis=a*14/100;
        cout<<"Your discount is Rs"<<dis<<endl;
        amount=a-dis;
        cout<<"You have to pay Rs"<<amount;
    }
    else if(a<=50000&&a>25000)
    {
        cout<<"You are eligible for a 16 percent discount"<<endl;
        dis=a*16/100;
        cout<<"Your discount is Rs"<<dis<<endl;
        amount=a-dis;
        cout<<"You have to pay Rs"<<amount;
    }
    else if(a>=100000&&a>50000)
    {
        cout<<"You are eligible for a 20 percent discount"<<endl;
        dis=a*20/100;
        cout<<"Your discount is Rs"<<dis<<endl;
        amount=a-dis;
        cout<<"You have to pay Rs"<<amount;
    }
    return 0;
}