#include<iostream>

 using namespace std;

// //diamond

 class d

 {

 public:
 void print()
   {
cout<<"top of the diamond";
  }

 };

class a :public d
{

 };

class b :public d

 {

 };

 class c :public a,public b

 {

 };

 c c1;

 int main()

 {

c1.a::print();

   return 0;

 }
