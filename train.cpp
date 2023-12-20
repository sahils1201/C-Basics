#include<iostream>
using namespace std;

int main()
{
    int speed,advspeed;
    cout<<"Enter speed: ";
    cin>>speed;

    if (speed>=120)
    {
        cout<<"Dhire chala bhai thuk jayega."<<endl;
        advspeed=speed-30;
        cout<<"Chup chap itni speed pe chala: "<<advspeed;
    }
    else if(speed<120&&speed>80)
    {
        cout<<"Fine, theek hai."<<endl;
        advspeed=speed-20;
        cout<<"itni speed pe chala le: "<<advspeed;

    }
    else if(speed<80)
    {
        cout<<"Sahi ja raha hai aisa hi chalate ja"<<endl;
    }
    return 0;
}

// #include<iostream>
// using namespace std;

// int main()
// {
//     int sum=0;
//     int a=0;
//     int b=1;
//     int range;
//     cout<<"Enter range: ";
//     cin>>range;

//     for(int i=0;i<range;i++)
//     {
//         cout<<a<<" ";
//         sum=a+b;
//         a=b;
//         b=sum;
//     }

// }