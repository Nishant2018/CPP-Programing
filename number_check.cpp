#include<iostream>
using namespace std;

int main()
{
    int a;
    cout <<"Enter the number for checking=";
    cin >>a;

    if (a>0)
    {
        cout <<"a is positive";
    }
    else if(a==0)
    {
        cout <<"you enter zero";
    }
    else if(a<0)
    {
        cout <<"a is negative";
    }

}