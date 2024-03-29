#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>  &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> vec1;
    int size,element;
    cout<<"Enter the size of an vector:";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter the value to insert in vector:";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    vec1.pop_back();
    display(vec1);
    vector<int>::iterator it;
    it = vec1.begin();
    vec1.insert(it+1,5,66);
    display(vec1);
    cout<<endl;
    cout<<"Trying to swap two vactor elements:";
    cout<<endl;
    vector<int> vec2(6,5);
    vector<int> vec3(3,3);
    vec2.swap(vec3);
    for(int i=0;i<vec2.size();i++){
        cout<<vec2[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<vec3.size();i++){
        cout<<vec3[i]<<" ";
    }
    return 0;

}
