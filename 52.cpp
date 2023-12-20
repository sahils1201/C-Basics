#include<iostream>
using namespace std;

void palindrome(string palin)
{
    bool ispalin=true;
    palin.length();
    int left=0;
    int right=palin.length()-1;
    for(int i=0;i<=palin.length();i++)
    {
        if(palin[left]==palin[right])
        {
            left++;
            right--;
        }
        else
        {
            ispalin=false;
            break;
        }
    }
    if(ispalin==true)
    {
        cout<<palin<<" is a palindrome.";
    }
    else
    {
        cout<<palin<<" is not a palindrome.";
    }
}

int main()
{
    string name;
    cout<<"Please enter a string to check if it is a palindrome or not: ";
    cin>>name;
    palindrome(name);
}
