#include<iostream>
using namespace std;

int main()
{
    int radius,diameter;
    float area,circumference,pie;
    pie=3.14;
    cout <<"Enter the value of radius:";
    cin >>radius;
    diameter=2*radius;
    circumference=2*pie*radius;
    area=pie*radius*radius;
    cout <<"Diameter of circle is :"<< diameter;
    cout <<"\nCircumference of circle is :"<< circumference;
    cout <<"\nArea of circle is :"<< area;

    
}