#include<iostream>
using namespace std;

int main()
{
    int m1,m2,m3,m4,m5;
    float total,percentage,average;
    m1=84;
    m2=82;
    m3=68;
    m4=77;
    m5=97;
    
    total=m1+m2+m3+m4+m5;
    average=(m1+m2+m3+m4+m5)/5;
    percentage=(total/500)*100;

    cout <<"Total marks is :"<<total;
    cout <<"\nAverage marks is :"<<average;
    cout <<"\nPercentage of total marks is :"<<percentage;


}