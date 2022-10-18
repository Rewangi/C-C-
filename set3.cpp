#include<iostream>
#include<set>
#include<list>
using namespace std;

int main(){
    set<int> s = {10,12,15,16};
    set<int> :: iterator it;
    cout<<"First element is:"<<*(s.begin());
    cout<<"\nLast element is: "<<*--(s.end())<<endl;

    for(auto it = s.begin(); it!=s.end(); it++)
    {
        cout<<" "<<*it;
    }
    cout<<endl;
    if(s.empty())
    cout<<"Empty";
    else
    cout<<"Not Empty";
    cout<<"\nSize of the set: "<<s.size();
    cout<<"\nMax Size: "<<s.max_size();
    s.erase(s.begin());
    s.erase(12);
    cout<<"\n After removing the firest element and the element 12:";
    for(auto it = s.begin(); it!=s.end(); it++)
    {
        cout<<" "<<*it;
    }
    s.insert(5);
    cout<<"\nAfter inserting the new element 5:";
    for(auto it = s.begin(); it != s.end(); it++){
        cout<<" "<<*it;

    }
    if(s.count(15)==1)
    cout<<endl<<"15 is present in the set";
    else
    cout<<endl<<"15 is not present";

    s.clear();
    if(s.empty())
    cout<<"\n Now, the set is empty";
    else
    cout<<"\nSet is not empty";
    return 0;
}


