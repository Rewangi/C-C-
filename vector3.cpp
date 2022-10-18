#include<iostream>
// #include<bits/stdc++.h>
#include<vector>
#define row 3
#define col 3
using namespace std;
int main()
{
    vector<vector<int>>a;
     vector<int>a1;
    int num=10;
    for(int i=0;i<row;i++)
    {
        vector<int>a1;
 for(int j=0;j<col;j++)
    {
        a1.push_back(num);
        num+=5;
    }
    a.push_back(a1);
    }
    cout<<"2d vector contains"<<"\n";
    for(int i=0;i<a.size();i++){
       for(int j=0;j<a[i].size();j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
     a[2].pop_back();
    a[1].pop_back();
      cout<<"2d vector contains after deletion"<<"\n";
    for(int i=0;i<a.size();i++){
       for(int j=0;j<a[i].size();j++)
        cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}





