#include<iostream>
using namespace std;
void swap(int *x, int*y){

    int swap;
    swap = *x;
    *x = *y;
    *y = swap;
}
int main(){

    int a=100;
    int b = 200;
    swap(a,b);
    cout<<a<<endl<<b;
    return 0;
}