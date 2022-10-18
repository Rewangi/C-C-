#include<iostream>

using namespace std;
class A{
int a=10;
 public:
 int b=2;
 void student()

    {

cout<<"student name"<<endl;
         }

};
class B:public A{
public:
void B1()
 {
int c=6;
student();
 
 cout<<"hello this is B1"<<endl;
 c+=b;
  cout<<c<<endl;
  }

};

int main()

{
 B b;
 b.B1();

    return 0;

}
