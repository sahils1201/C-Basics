// #include<iostream>
// using namespace std;

// int main()
// {
//     int range;
//     cout<<"Enter range: ";
//     cin>>range;
//     int j=2;
//     int i=2;
//     int count=0;

//     do
//     {
//         while(i<=j/2)
//         {   
//             if(j%i==0)
//             {
//                 count++;
//                 break;
//             }
//             i++;
//         }
//         if(count==0)
//         {
//             cout<<i<<" ";
//         }
//     } while (i<=range);

// }

#include <iostream>
using namespace std;
int main() {
    
    cout << "Hello world!";
    int range,i,j,flag;
    cin>>range;
   
    i = 1;
    do{
        i++;
        j=1; 
        // cout<<i<<endl;
        flag = 0;
        do{
            j++;
            if(i%j==0){
                flag++;
            }
        }while(j<i/2);
       
        if(flag==0){
            cout<<i<<endl;
        }
        
    }while(i<range);
   
    return 0;
}