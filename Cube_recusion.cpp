#include<iostream>
using namespace std;
int cube(int n){
    return n*n*n;
}
int main(){
    int n;
    cout<<"Write a number to find its cube..:";
    cin>>n;

    cout<<"cube of the number is..:"<<cube(n);

}