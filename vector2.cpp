#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
    for(int i=0;i<=10;i++)
    a.push_back(i * 10);
    cout<< "\nReference operator [g] : a[2 ] = "<<a[2];
    cout<< "\nat : a.at(4) = "<<a.at(4);
    cout<< "\front() : a.front() = "<<a.front();
    cout<< "\nback() :a.back() = "<< a.back();
    int*  pos = a.data();

    cout<<"\n The first element is "<< * pos;
    return 0;
}