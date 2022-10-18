/*#include<iostream>
using namespace std;

class outside{
    public:

    class nested{
        public:
        static int x;
        static int y;
        int f();
        int g();
    };

};
int outside :: nested :: x =5;
int outside :: nested :: f() { 
    cout<< "hello"<<endl;
    return 0;}
typedef outside :: nested outnest;
int outnest :: y =10;
int outnest :: g() {return 0;}
int main(){
    outside :: nested op;
    op.f();
    

}*/

/*#include<iostream>
using namespace std;
class a{
public:
int x;
class b{
 public:
b(){
 cout<<"Hello Ria"<<endl;
}
};
 class c:public b{
 public:
c(){
 cout<<"Hello"<<endl;
 }
 b z;
 //a::b y2;
 c *x;          
 //a::c *x2;

};

};

int main(){

    a::c obj;

}   */

#include <iostream>
#include <string>
using namespace std;
 
class Poingable {
public:
virtual void poing() = 0;
};
 
void callPoing(Poingable& p) {
p.poing();
}
 
class Bingable {
public:
virtual void bing() = 0;
};
 
void callBing(Bingable& b) {
b.bing();
}
 
class Outer {
string name;
// Define one inner class:
class Inner1;
friend class Outer::Inner1;
class Inner1 : public Poingable {
Outer* parent;
public:
Inner1(Outer* p) : parent(p) {}
void poing() {
cout << "poing called for "
<< parent->name << endl;
// Accesses data in the outer class object
}
} inner1;
// Define a second inner class:
class Inner2;
friend class Outer::Inner2;
class Inner2 : public Bingable {
Outer* parent;
public:
Inner2(Outer* p) : parent(p) {}
void bing() {
cout << "bing called for "
<< parent->name << endl;
}
} inner2;
public:
Outer(const string& nm)
: name(nm), inner1(this), inner2(this) {}
// Return reference to interfaces
// implemented by the inner classes:
operator Poingable&() { return inner1; }
operator Bingable&() { return inner2; }
};
 
int main() {
Outer x("Ping Pong");
// Like upcasting to multiple base types!:
callPoing(x);
callBing(x);
}

/*#include<iostream>
using namespace std;
class A{
    public:
    int n,m;
    A() : n(10), m(20) {}
};
int main(){
    A a;
    cout<<a.n<<endl;
    cout<<a.m<<endl;
    return 0;

}*/




