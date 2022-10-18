/*#include<iostream>
using namespace std;

void function(float a){
    cout<<"Data type: float\n";

}

void function(int ){
    cout<<"data type: int \n";
}

int main(){

    //function(1.0);
    function(1.0f);
    function(1);

    function(1.0f);
    function(1);

    function(1);
    return 0;
}*/

#include<iostream>
using namespace std;

int multiply(int a, int b){
    cout<<"a*b: "<<a*b<<endl;
}

int multiply(int a, double b){
    cout<<"a*b :"<<a*b<<endl;
}
int multiply(double a, int b){
    cout<<"a*b:"<<a*b<<endl;
}

int main(){
    int a =10, b =20;
    cout<<multiply(a,b);
    return 0;
}

/*#include<iostream>
using namespace std;
int add(int a){
    int b = 10;
    return a+b;
}

int add(int a, int b = 10){
    return a+b;
}
int main(){
    int a =5;
    //error
    // cout<< "a+b ="<<add(a)<<endl;
}*/