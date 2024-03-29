#include<iostream>
#include<math.h>
using namespace std;

float getDiameter(int radius);
float getPerimeter(int radius);
float getArea(int radius);

int main()
{
    int radius,dia,are,peri;
    

    cout<<"Enter the value of radius:";
    cin>>radius;

    dia= getDiameter(radius);
    peri= getPerimeter(radius);
    are= getArea(radius);

    cout <<"Diameter of circle is:"<<dia;
    cout<<"\n";
    cout<<"Perimeter of circle is:"<<peri;
    cout<<"\n";
    cout<<"Area of circle is:"<<are;

    return 0;
}
float getDiameter(int radius)
{
    return(2*radius);
}
float getPerimeter(int radius)
{
    return(2*M_PI*radius);
}
float getArea(int radius)
{
    return(M_PI*radius*radius);
}
