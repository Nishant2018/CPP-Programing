#include<iostream>
using namespace std;

int main()
{
    int i,j,N;

    cout <<"Enter the number of rows:";
    cin >>N;

    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N;j++)
        {
            cout <<"*";
        }
        cout <<"\n";
    }

}