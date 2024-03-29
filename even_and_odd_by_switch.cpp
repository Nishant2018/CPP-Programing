#include<iostream>
using namespace std;

int main()
{
    int a;
    cout <<"Enter the number for check even and odd:";
    cin >>a;

    switch(a%2==0)
    {
        case 0:
        cout <<"number is odd";
        break;

        case 1:
        cout <<"number is even";
        break;
    }
}