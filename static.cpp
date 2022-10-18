
#include<iostream> 
using namespace std; 
class square{ 
private: 
int a,a2; 
square(){ 
 a=10; 
 a2=20; 
 cout<<"created\n"; 
} 
 public: 
void display(){ 
cout<<"\nArea:"<<a*a2<<endl; 
} 
 static square fun(){ 
square s; 
 s.display(); 
 return s;

} 
}; 
int main(){ 
square S = square::fun();   
square S1 = square::fun();

 return 0; 
}

