#include<iostream>
using namespace std;

void area(double radius)
{
    int area;
    area=3.14*radius*radius;
    cout<<"The area of the circle is: "<<area;
}
void area(double height, double base)
{
    int tarea;
    tarea=0.5*height*base;
    cout<<"The area of the triangle is: "<<tarea;
}
void area(double length, double breadth)
{
    int rarea;
    rarea=length*breadth;
    cout<<"The area of the rectangle is: "<<rarea;
}
int main()
{
    int choose;
    cout<<"Enter the shape you want to check the area of:"<<endl;
    cout<<"1.Circle"<<endl;
    cout<<"2.Triangle"<<endl;
    cout<<"3.Rectangle"<<endl;
    cin>>choose;

    switch(choose)
    {
        case 1:
            int r;
            cout<<"Enter radius of circle: ";
            cin>>r;
            area(r);
            break;

        case 2:
            int h,b;
            cout<<"Enter height of triangle: ";
            cin>>h;
            cout<<"Enter base of triangle: ";
            cin>>b;
            area(h,b);
            break;
        
        case 3:
            int l,br;
            cout<<"Enter length of rectangle: ";
            cin>>h;
            cout<<"Enter breadth of rectangle: ";
            cin>>br;
            area(h,b);
            break;

        default:
            cout<<"Enter valid choice.";
            break;
    }
}
