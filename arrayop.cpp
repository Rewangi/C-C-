#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int c[n*n];
    cout<<"enter first array: ";
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
    cout<<"enter second array: ";
    for(int i=0;i<n;i++)
    {
    cin>>b[i];
    }
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[k] = a[i]+b[j];
            k++;
        }
    }
    cout<<"addition: "<<endl;
    for(int i=0;i<n*n;i++)
    {
        cout<<c[i]<<" ";
    }
        cout<<endl;
        k=0;
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[k] = a[i]*b[j];
            k++;
        }
    }
    cout<<"multiplication: "<<endl;
    for(int i=0;i<n*n;i++)
    {
        cout<<c[i]<<" ";
    }
}