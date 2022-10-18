/*#include<iostream>
using namespace std;
 void age_in5yr(int age){
    age += 5;
    std::cout << "Age in 5 years: "<< age<< std::endl;
 }

 int main(){


    int age = 95;
    age_in5yr(age);
    std::cout<<"Current age:"<<age;
 }
 */

/* #include<iostream>
using namespace std;
 void age_in5yr(int &age){
    age += 5;
    std::cout << "Age in 5 years: "<< age<< std::endl;
 }

 int main(){
    

    int age = 95;
    age_in5yr(age);
    std::cout<<"Current age:"<<age;
 }
*/
#include<iostream>
using namespace std;
void swap (int &num1, int &num2)
{
        int temp;
        temp=num1;
        num1=num2;
        num2=temp;
}
int main()
{
        int a=5,b=10;
        cout<<"\n Before swapping"<<"\n A = "<<a<<"\n B = "<<b<<endl;
        swap(a,b);
        cout<<"\n After swapping"<<"\n A = "<<a<<"\n B = "<<b<<endl;
        return 0;
}
 