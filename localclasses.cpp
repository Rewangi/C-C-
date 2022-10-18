#include<iostream>
using namespace std;
 int x = 20; // global val
 void f(){
   
    static int y = 10;
    int x;

    extern int g();//extern fun g can be used by local class
 class local{
   public:
 //int g() {return x;} //local val can not be used 

int h()  {return y;} // valid, static variable y
int k()   {return ::x;} //valid, global x;
int l()    {return g();} // valid extern fun g

 };
 local l1;
 l1.h();
  }
 
 int main(){
    f();
    return 0;
 }