#include<iostream>
using namespace std;

int main()
{
    int i,sum;
    i=1;
    sum=0;
    while (i<=100)
    {
        if (i%2==0)
        {
            sum=i + sum;
        }
        i++;
    }
    cout << sum;
}