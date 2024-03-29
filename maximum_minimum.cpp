#include<iostream>
using namespace std;

int max(int num_1 , int num_2);
int min(int num_1 , int num_2);

int main()
{
    int num_1,num_2,maximum,minimum;

    cout<<"Enter the first number:";
    cin>>num_1;

    cout <<"Enter the second number:";
    cin>>num_2;

    maximum= max(num_1, num_2);
    minimum= min(num_1 , num_2);

    cout <<"Maximun number is:"<<maximum;
    cout<<"\n";
    cout<<"Minimum value is :"<<minimum;

    return 0;
}

int max(int num_1 , int num_2)
{
   return((num_1 > num_2)? num_1 : num_2);
}
int min(int num_1 , int num_2)
{
    return((num_1 > num_2)? num_2 : num_1);
}
