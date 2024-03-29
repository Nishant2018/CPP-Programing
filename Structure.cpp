#include<iostream>
using namespace std;
struct employee
{
    /* data */
    int eID;
    char favchar;
    float salary;
};

int main(){
     struct employee nishant;
    struct employee bipin;
    nishant.eID=211420009;
    nishant.favchar='M';
    nishant.salary=100000;

    cout<<"Id of nishant is "<<nishant.eID<<endl;
    cout<<"Fav.. char of nishant is  "<<nishant.favchar<<endl;
    cout<<"Salary of nishant is.."<<nishant.salary;

    
}

