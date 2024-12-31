#include<iostream>
using namespace std;

void linearSearch(int arr[],int value,int n){
   
    for(int i=0;i<n;i++){
        if(arr[i]==value){
            cout<<"Present: ";
        }
    }
}

int main(){
    int arr[50],size,i,value;
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the value of array: ";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Display array: ";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nEnter the Element to find element in array: ";
    cin>>value;
    linearSearch(arr,value,size);
}