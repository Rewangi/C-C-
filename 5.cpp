#include<iostream>

using namespace std;

namespace first{

    int d;

    int sum(int a,int b){

         d=a+b;

        return d;  

    }

    }

   namespace second

   {

    int a,b;

    int FinalSum(int c){

        return first::sum(a,b)+c;

    }

   }

   int main(){
int a,b,c;

cout<<"enter value of x and y and z :"<<endl;
cin>>a>>b>>c;

cout<<"Sum of a and b is "<<first::sum(a,b)<<endl;

cout<<"Final a, b and c is ="<<second::FinalSum(c);

   }