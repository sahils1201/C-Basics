//Print names 100 times using for loop
#include<iostream>
using namespace std;

int main()
{
    string name;
    int n;
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"How many times do you want your name to be printed? ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<<i<<"."<<name<<endl;
    }
    return 0;
}