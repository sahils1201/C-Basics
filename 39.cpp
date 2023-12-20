#include <iostream>
using namespace std;

int main()
{
    string input,rev;
    cout<<"enter input: ";
    cin>>input;

    input.length();

    int i=input.length();
    while(i >= 0)
    {
        rev+=input[i];
        i--;
    }
    cout<<rev;
}