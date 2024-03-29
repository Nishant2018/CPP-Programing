#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of a..:";
    cin>>a;
    cout<<"Enter the value of b..:";
    cin>>b;
    cout<<"Enter the value of c...:";
    cin>>c;
    if(a>b && a>c){
        cout<<"a is greater";
    }
    else if(b>a && b>c){
        cout<<"b is greater";
    }
    else{
        cout<<"c is greater";
    }
    cout<<endl;
    int i;
    cout<<"Press 1 for while loop";
    cout<<endl;
    cout<<"Press 2 for for_loop";
    cin>>i;

    switch (i)
    {
    case 1:
        int d;
        while(d<11){
            cout<<d;
        }
        break;
    case 2:
    
    for(int i=0;i<10;i++){
        cout<<i;
        
    }
    break;
    
    default:
        break;
    }
}
