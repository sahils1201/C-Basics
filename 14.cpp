//Calculator +,-,*,/
#include<iostream>
using namespace std;

int main()
{
    int a,b,sum,diff,prod,div,rem, toggle = 0;
    char op;
    cout<<"Enter number a: ";
    cin>>a;
    cout<<"Enter number b: ";
    cin>>b;
    

    do
    {
        cout<<endl<<"Choose Operation"<<endl;
        cout<<"For Addition press +"<<endl;
        cout<<"For Subtraction press -"<<endl;
        cout<<"For Multiplication press *"<<endl;
        cout<<"For Division press /"<<endl;
        cout<<"For Modulus press %"<<endl;
        cin>>op;
            if (op=='+')
        {
            sum=a+b;
            cout<<"The sum of "<<a<<" & "<<b<<" is "<<sum;
            toggle = 0 ;
        }
        else if (op=='-')
        {
            diff=a-b;
            cout<<"The difference of "<<a<<" & "<<b<<" is "<<diff;
            toggle = 0 ;
        }
        else if (op=='*')
        {
            prod=a*b;
            cout<<"The product of "<<a<<" & "<<b<<" is "<<prod;
            toggle = 0 ;
        }
        else if (op=='/')
        {
            div=a/b;
            cout<<"The quotient of "<<a<<" & "<<b<<" is "<<div;
            toggle = 0 ;
        }
        else if (op=='%')
        {
            div=a%b;
            cout<<"The remainder of "<<a<<" & "<<b<<" is "<<rem;
            toggle = 0 ;
        }
        else
        {
            cout<<"Invalid Operator";
            toggle = 1;
        }
    } while(toggle);
    return 0;
}
