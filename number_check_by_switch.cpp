#include<iostream>
using namespace std;

int main()
{
    int num;
    cout <<"Enter the number:";
    cin >>num;

    switch(num>0)
    {
        case 1:
        cout <<"Number is positive";
        break;
        
        case 0:
        switch(num<0)
        {
            case 1:
            cout <<"Number is negative";
            break;

            case 0:
            cout <<"Number is zero";
            break;
        }
    }
}