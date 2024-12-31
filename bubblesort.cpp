#include<iostream>
using namespace std;

void bubblesort(int arr[],int size){
    int i,j;
    bool swapp;
    for(i=0;i<size-1;i++){
        swapp = false;
        for(j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapp = true;
            }
        }
        if(swapp == false){
            break;
        }
    }
}

int main(){
    int arr[50];
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"\nEnter the element of array:";

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    bubblesort(arr,size);

    cout<<"Display Sorted array : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    
}