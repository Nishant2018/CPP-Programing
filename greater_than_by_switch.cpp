#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout <<"Enter the value of a:";
    cin >>a;

    cout <<"Enter the value of b:";
    cin >>b;

    switch(a>b)
    {
        case 0:
        cout <<"b is greater than a";
        break;

        case 1:
        cout <<"a is greater than b";
        break; 
    }
}