#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter the value of first angle:";
    cin>>a;
    cout<<"Enter the value of second angle:";
    cin>>b;
    cout<<"Entre the value of third angle:";
    cin>>c;

    if((a==b)&&(a==c)&&(b==c))
    {
        cout<<"Triangle is eque....";
    }
    else if((a==b)||(a==c)||(c==b))
    {
        cout<<"Tringle is iso....";
    }
    else if((a!=b)&&(a!=c)||(c!=b))
    {
        cout<<"Triangle is sca.....";
    }
}