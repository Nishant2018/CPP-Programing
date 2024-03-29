#include<iostream>
using namespace std;

int main()
{
    int length,breadth,area,perimeter;
    cout <<"Enter the value of length:";
    cin >>length;
    cout <<"Enter the value of breadth:";
    cin >>breadth;
    perimeter=2*(length+breadth);
    area=length*breadth;
    cout <<"Perimeter of rectangle is :"<<perimeter;
    cout <<"\n Area of rectangle is :"<<area;
}    