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
    cout<<"Traversal of array: ";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}