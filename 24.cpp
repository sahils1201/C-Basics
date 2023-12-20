
#include<iostream>
using namespace std;

int main()
{
    string ab;
    cout<<"Enter name: ";
    getline(cin,ab);
    ab.length();
    for(int a=0;a<=ab.length();a++)
    {
        cout<<ab[a]<<" ";
    }
}
