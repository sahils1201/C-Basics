#include<iostream>
using namespace std;

int main()
{
    int nos=0;
    string sentence;
    cout<<"Enter a sentence: ";
    getline(cin,sentence);
    sentence.length();

    for(int i=0;i<=sentence.length();i++)
    {
        if(sentence[i]=='A'|| sentence[i] == 'a'|| sentence[i]=='E'|| sentence[i]=='e'|| sentence[i]=='I'|| sentence[i]=='i'|| sentence[i]=='O'|| sentence[i]=='o'|| sentence[i]=='U'|| sentence[i]=='u')
        {
            nos++;
        }
    }
    cout<<"The number of vowels in this sentence are: "<<nos;
    return 0;
}