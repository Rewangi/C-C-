/*#include<iostream>
using namespace std;
class {
int value;
  public:
 void setdata(int i){
  this->value=i;
 }
  void printvalues(){
  cout<<"value:"<<this->value<<endl;
  }

}

obj1;
int main(){
obj1.setdata(10);
 obj1.printvalues();

}*/
/*#include<iostream>
using namespace std;
typedef class {
int value;
 public:
void setdata(int i){
 this->value=i;

    }
 void printvalues(){
cout<<"value:"<<this->value<<endl;

    }

}myclass;



int main(){
 myclass obj1,obj2;
 obj1.setdata(20);
  obj1.printvalues();

}*/

#include<iostream>

using namespace std;
typedef class{
int value;
public:
void print(){
 cout<<"c1"<<endl;
 }

}c1;

typedef class:public c1{
 int val;
 public:

  
    void print(){

    cout<<"c2"<<endl;

    }

}c2;

int main(){

    c2 ob1;

    ob1.print();

    return 0;

}