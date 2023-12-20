//
#include<iostream>
using namespace std;

int main()
{
    int age;
    char gender;
    string weather;
    // cout<<
    cout<<"Male - M"<<endl;
    cout<<"Female - F"<<endl;
    cin>>gender;

    cout<<"What is your age? ";
    cin>>age;

    cout<<"What's the weather like at your Location?"<<endl;
    cout<<"1.Summer\n2.Monsoon\n3.Winter\n";
    cin>>weather;

    if(gender=='M'||gender=='m')
    {
        if(age<16)
        {
            cout<<"You are a child.";
            if(weather=="Summer"||weather=="summer")
            {
                cout<<"Wear light coloured cotton tshirts,sport ganjees and shorts";
            }
            else if(weather=="Monsoon"||weather=="monsoon")
            {
                cout<<"Wear a raincoat and carry an umbrella";
            }
            else if(weather=="Winter"||weather=="winter")
            {
                cout<<"Wear sweaters.";
            }
        }
        else if(age>16)
        {
            if(weather=="Summer"||weather=="summer")
            {
                cout<<"Wear light coloured cotton tshirts and shorts";
            }
            else if(weather=="Monsoon"||weather=="monsoon")
            {
                cout<<"Wear fully covered clothes, wear a raincoat and carry an umbrella";
            }
            else if(weather=="Winter"||weather=="winter")
            {
                cout<<"Wear hoodies, sweaters, mufflers and gloves.";
            }
        }
        
    } 
    else if(gender=='F'||gender=='f')
    {
        if(age<16)
        {
            if(weather=="Summer"||weather=="summer")
            {
                cout<<"Wear frock, loose tops,etc";
            }
            else if(weather=="Monsoon"||weather=="monsoon")
            {
                cout<<"Wear a raincoat and carry an umbrella";
            }
            else if(weather=="Winter"||weather=="winter")
            {
                cout<<"Wear nani ke bune hue sweaters,etc.";
            }
        }
        else if(age>16)
        {
            if(weather=="Summer"||weather=="summer")
            {
                cout<<"Wear loose clothes, skirts, loose tops,etc";
            }
            else if(weather=="Monsoon"||weather=="monsoon")
            {
                cout<<"Wear fully covered clothes, wear a raincoat and carry an umbrella";
            }
            else if(weather=="Winter"||weather=="winter")
            {
                cout<<"Wear shawls,sweaters,etc.";
            }
        }
        
    }
    return 0;
}