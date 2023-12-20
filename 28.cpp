// #include<iostream>
// using namespace std;

// int main()
// {
//     string num,rev;
//     int i;
//     cout<<"Enter number: ";
//     cin>>num;
//     num.length();
//     int left=0;
//     int right=num.length()-1;

//     for(i=0;i<num.length();i++)
//     {
//         char temp=num[right];
//         num[right]=num[left];
//         num[left]=temp;
//         left++;
//         right--;
//     }
//     cout<<num;
    
// }


#include<iostream>
using namespace std;

int main()
{
    string num,rev;
    int i,b;
    cout<<"Enter number: ";
    cin>>num;

    for(i=num.length()-1;i>=0;i--)
    {
        rev+=num[i];
    }
    cout<<rev;
}