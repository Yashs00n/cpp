#include<iostream>
using namespace std;

int main()
{
    int *ptr,b;
    b=10;
    ptr = &b;

    cout<<"prt: "<<ptr;
    cout<<"\n&ptr: "<<&ptr;
    cout<<"\n*ptr: "<<*ptr;
    cout<<"\nb: "<<b;
    cout<<"\n&b: "<<&b;
    //cout<<"\n*b"<<*b;
}