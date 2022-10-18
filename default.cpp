/*#include<iostream>
using namespace std;
class Line{
    public:
    int size;
    Line(){
        size = 30;
    }

};

int main(){
    Line l;
    cout<<"line size "<<l.size<<" "<<"cm";
    return 0;
}
*/

#include<iostream>
using namespace std;
class ABC{
 private:
 int x,y;
public:
ABC()
 {

 }
ABC(int a)
 {
 x =y =a;

 }
 ABC(int a, int b)
 {
x=a;
y=b;
 }
void display()
{
 cout<<"x = "<<x<<" and "<<"y is"<<y;
}
 };

int main()
{
ABC cc1;
ABC cc2(10);
ABC cc3(10,20);
cc1.display();
cc2.display();
cc3.display();
 return 0;
}



































