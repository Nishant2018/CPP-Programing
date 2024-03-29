#include<iostream>
using namespace std;
int simple_interest(int p,int r,int t)
{
    int result;
    result=(p*r*t)/100;
    cout<<result<<endl;
    return result;
}
int compound_interest(int p,int n,int r,int t)
{
    int A;
    A = (p*(1+(r/n)^n*t));
    cout<<(A-p);
    return 0;
}
int main()
{
    int p,r,t,n;
    //float simple_interest;
    
    cout <<"Enter the principle amount:";
    cin >>p;

    cout <<"Enter the time in year:";
    cin >>t;

    cout <<"Enter the rate:";
    cin >>r;

    cout<<"Number of time interest:";
    cin>>n;

    //simple_interest = (p*r*t)/100;
    //simple_interest();
    //cout <<"Simple_interest is eqaul to:"<<simple_interest();
    simple_interest(p,r,t);
    compound_interest(p,r,t,n);
    
}