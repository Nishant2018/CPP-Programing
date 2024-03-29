#include<iostream>
using namespace std;

int main()
{
    int n,num,rev;
    rev=0;

    cout <<"Enter the number to check palindrom:";
    cin >>n;

    num=n;

    while(n!=0)
    {
        rev= (rev*10) + (n%10);
        n /= 10;
    }

    if(rev==num)
    {
        cout <<"Number is palindrom";
    }
    else 
    {
        cout <<"Number is not palindrom";
    }
}