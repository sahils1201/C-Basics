#include<iostream>
using namespace std;

int main()
{
    int a,sum=0,counter = 0;
    cout<<"Enter Number: ";
    cin>>a;

    for(int i=2; i<=a ;i++)
    {
        counter =0;
        for (int j = 2 ; j <= i/2; j++)
        {
            if( i % j == 0)
            {
                counter++;
            }

        }

        if(counter == 0)
        {
            sum +=i;
        }
    }
    cout<<sum;

}


// #include<iostream>
// using namespace std;

// int main()
// {
//     int a,i;
//     int count=0;
//     cout<<"Please enter number: ";
//     cin>>a;

//     for(int i=2;i<=a/2;i++)
//     {
//         if(a%i==0)
//         {   
//             count++;
//             break;
//         }
//     }

//     if(count==0)
//     {
//         cout<<"Number is prime";
//     }
//     else
//     {
//         cout<<"Number is not prime";
//     }
// }