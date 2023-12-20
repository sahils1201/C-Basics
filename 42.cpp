#include<iostream>
using namespace std;
int main()
{
    int i,num=0,avg,j=0,sum=0;
    while(i!=num)
    {
        cout<<endl<<"Enter number: ";
        cin>>i;
        sum+=i;
        j++;
        avg=sum/j;
        cout<<endl<<avg;
    }
    return 0;
}