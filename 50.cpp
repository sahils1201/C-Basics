#include<iostream>
using namespace std;

void reverse(string name)
{
    name.length();
    string rev;
    int i=name.length();
    while(i >= 0)
    {
        rev+=name[i];
        i--;
    }
    cout<<rev;
}
int main()
{
    string a;
    cout<<"Enter a string to reverse: ";
    cin>>a;
    reverse(a);
}