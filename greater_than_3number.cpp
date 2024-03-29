#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
     cout <<"Enter tha value of a:";
     cin >>a;

     cout <<"Enter tha value of b:";
     cin >>b;

     cout <<"Enter the value of c:";
     cin >>c;

     if (a>b&&a>c)
     {

         cout <<"a is greater tha a and b";
     }
     else if (b>a&&b>c)
     {
         cout <<"b is greater than a and c";
     }
     else if(c>a&&c>b)
     {
         cout <<"a is greater than a and b";
     }
}