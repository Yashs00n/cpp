#include<iostream>
using namespace std;

int main(){
    int arr[50],size,i,pos,value;
    cout<<"Enter the size of array:";
    cin>>size;
    cout<<"Enter the element of array: ";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the postion in which add ele,emt in array: ";
    cin>>pos;
    cout<<"Enter the value at particular postion: ";
    cin>>value;
    for(i=size-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=value;
    size=size+1;
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }


}