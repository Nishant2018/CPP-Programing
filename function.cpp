#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    cout<<"Enter the value of a...:";
    cin>>a;

    cout<<"Enter the value of b...:";
    cin>>b;
    cout<<"Addition of two number is..."<<add(a,b);
    return 0;

}