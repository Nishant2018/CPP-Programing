#include<iostream>
#include<list>
using namespace std;
void display(list<int> &l){
    list<int>::iterator it1;
    for(it1=l.begin();it1!=l.end();it1++){
        cout<<" "<<*it1;
    }
}
int main(){
    list<int> l1;
    l1.push_front(25);
    l1.push_front(36);
    l1.push_back(88);
    l1.push_back(94);
    l1.push_back(64);
    l1.push_front(55);
    display(l1);
    return 0;
}