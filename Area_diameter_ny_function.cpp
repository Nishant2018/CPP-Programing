#include<iostream>
using namespace std;
int diameter(int radius){
    cout<<"Diameter of the circle is..:"<<2*radius;
    cout<<endl;
}
int circum(int radius){
    cout<<"Circumference of the circle is...:"<<2*3.14*radius;
    cout<<endl;
}
int area(int radius){
    cout<<"Area of the circle is..:"<<3.14*radius*radius;
}
int main(){
    int radius;
    cout<<"Enter the radius...:";
    cin>>radius;
    diameter(radius);
    circum(radius);
    area(radius);
}