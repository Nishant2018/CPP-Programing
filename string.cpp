#include<iostream>
using namespace std;
int main(){
    string n ="Nishant ";
    string o ="Harshit";
    cout<<n;
    cout<<endl;
    n.replace(8,1,o);
    cout<<n;
    cout<<endl;
    n.erase();
    cout<<n;
    
}