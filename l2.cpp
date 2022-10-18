#include<iostream>
using namespace std;
void f(){
    class local
    {
        int f();//local class error

        int g() {return 0;} //valid inline members
        //static int a; 
        int b;
    };
}

int main(){
    return 0;
}