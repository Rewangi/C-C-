#include<iostream>
#include<set>
using namespace std;
int main(){
    set<string> strng_set{"iphone", "android", "baisc", "hello"};
    set<char> chr_set{'a', 'b', 'c','d'};
    set<int> int_set{1,3,4,5};
    for(int i =0;i < 4; i++){
        int_set.insert('a'+ i);
    }
    cout<<"strng_set size: "<< strng_set.size();
    cout<<endl;
    cout<<"strng_set size: "<< chr_set.size()<<endl;

    return 0;
}
