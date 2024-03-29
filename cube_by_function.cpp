#include<iostream>
using namespace std;

int cube(int num);

int main()
{
    int num,c;
    cout <<"Enter the nnumber:";
    cin >> num;

    c= cube(num);
    cout<<"Cube of number is :"<<c;

    return 0;
}

int cube(int num)
{
   return (num*num*num);
}