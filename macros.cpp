#include<iostream>
using namespace std;

#define PI 3.14
#define AREA(r) (PI*(r)*(r))

int main(){
    float r = 7;
    cout<<"Area of the circle is :"<<AREA(r)<<endl;
    return 0;
}