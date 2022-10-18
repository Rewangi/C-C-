#include<iostream>
using namespace std;
class B {};

class D : public B {};

void f(B* pb, D* pd){
    D* pd2 = static_cast<D*>(pb);
    B* pd2 = static_cast<*B>(pd);
}