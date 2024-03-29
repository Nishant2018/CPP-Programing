#include<iostream>
using namespace std;
int max_min(int a,int b){
    if(a>b){
        cout<<"Greater number is.."<<a;
    }
    else{
        cout<<"b is greater...";
    }
}
int main(){
    int a,b;
    cout<<"Write a value of a..:";
    cin>>a;
    cout<<"Write the value of b.:";
    cin>>b;
    max_min(a,b);


}