#include<iostream>
using namespace std;
int isprime(int num);
void printprime(int lowerLimit, int upperLimit);

void printprime(int lowerlimit,int upperlimit){
    cout<<"Prime number between lowerlimit and upperlimit is...";
    while(lowerlimit<=upperlimit){
        if( isprime(lowerlimit)){
            cout<<lowerlimit<<" ";
        }
        lowerlimit++;
    }
}
int isprime(int num){
    for(int i=2;i<num/2;i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int lowerlimit,upperlimit;
    cout<<"Enter the value of lowerlimit..:";
    cin>>lowerlimit;
    cout<<"Enter the value of upperlimit...:";
    cin>>upperlimit;
    printprime(lowerlimit,upperlimit);


}