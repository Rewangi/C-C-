#include<iostream>
using namespace std;

void fun(){
    class Test // local to fun
    {
        public:
        void method(){
            cout<<"local class method called"<<endl;
        }
};

Test t;
t.method();
}

int main(){
    fun();
    return 0;
}

