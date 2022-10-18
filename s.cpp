#include<iostream>
using namespace std;
template <class T>
T sub(T a, T b){
    T result;
    result = a-b;
    return result;

}

int main(){

    int i = 10, j = 8 , k;

    k = sub<int>(i,j);
cout<<k;

}