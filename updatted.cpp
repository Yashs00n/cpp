#include<iostream>
using namespace std;

int main(){
    int arr[20],i,size;
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the element of array: ";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    int upd,pos;
    cout<<"Enter the position element update: ";
    cin>>pos;
    cout<<"Enter the update value: ";
    cin>>upd;

    
    int hold;
    hold = arr[pos-1];
    cout<<"This value "<<hold<<" by this: "<<upd;
    arr[pos-1] = upd;
    cout<<"Traversal of array: ";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}