//Vowels
#include<iostream>
using namespace std;

int main()
{
    char n1;
    cout<<"Enter a character: ";
    cin>>n1;

    if(n1=='A'|| n1 == 'a'|| n1=='E'|| n1=='e'|| n1=='I'|| n1=='i'|| n1=='O'|| n1=='o'|| n1=='U'|| n1=='u')
    {
        cout<<"It is a vowel.";
    }
    else
    {
        cout<<"It is a consonant.";
    }
    return 0;
}