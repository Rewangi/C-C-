/*#include<iostream>
using namespace std;
class test{
    int *p;
    public:
    test(){
        p = new int[10];
        cout <<" test created"<<endl;

    }
    ~test ()
    {
        delete[]p;
        cout<<"test destroyed"<<endl;

    }

};

void fun(){
    test *t = new test ();
    delete t;
}

int main(){
    fun();
}*/


#include<iostream>
using namespace std;
class student
{
public:
student()
{
 cout<<"student class"<<endl;
}
void print()
 {
  cout<<"student"<<endl;
 }
 ~student()
{
  cout<<"student des"<<endl;
}

};

class S1:public student

{
 public:
 S1()
 { cout<<"child"<<endl;

    }
 ~S1()
 {
  cout<<"child des"<<endl;
}

};

class S2:public S1

{
 public:
 S2()
 {
     cout<<"child2"<<endl;
     }
 ~S2()
 {
  cout<<"child2 des"<<endl;
 }

};

int main()
{
student *p= new S2;
 delete p;
 return 0;

}

