#include<iostream>
using namespace std;

int main()
{
    int i,n;
    i=1;

    cout <<"Enter the value of n:";
    cin >>n;

    while(n>=i)
    {
        cout <<n;
        --n;
        cout <<"\n";
    }
}