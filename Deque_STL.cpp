#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> qu1;
    deque<int> qu2;
    int size,element;
    cout<<"Enter the size of qu1:";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter the element to insert in the queue:";
        cin>>element;
        qu1.push_back(element);
    }
    cout<<endl;
    cout<<"Enter the size of qu2:";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter the element to insert in the queue:";
        cin>>element;
        qu2.push_back(element);
    }
    cout<<"size of queue:"<<qu1.size()<<'\n';
    qu1.push_front(5);
    for(int i=0;i<qu1.size();i++){
        cout<<qu1[i]<<" ";
    }
    cout<<"size of queue:"<<qu1.size()<<'\n';
    qu1.pop_back();
    for(int i=0;i<qu1.size();i++){
        cout<<qu1[i]<<" ";
    }
    deque<int>::iterator it;
    it = qu2.begin()+1;
    qu1.assign(it,qu2.end()-1);
    cout<<endl;
    cout<<"After assign:"<<'\n';
    for(int i=0;i<qu1.size();i++){
        cout<<qu1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<qu2.size();i++){
        cout<<qu2[i]<<" ";
    }

    return 0;
}
