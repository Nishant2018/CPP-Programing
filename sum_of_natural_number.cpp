#include<iostream>
using namespace std;

int main()
{
    int i,sum;
    i=1;
    sum=0;
    while (i<=100)
    {
        sum=i + sum;
        i++;
    }
    cout << sum;
}