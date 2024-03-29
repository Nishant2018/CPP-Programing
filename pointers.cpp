#include<iostream>
using namespace std;
int main(){
    int i = 5;
    //int *ptr = i;
    int *ptr2 = &i;

    cout<<"Value of i is :"<<i<<endl;
    //cout<<"Value of ptr is :"<<ptr<<endl;
    cout<<"Value of ptr2 is :"<<*ptr2<<endl;
}