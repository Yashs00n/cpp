#include<iostream>
using namespace std;

void insertionSort(int arr[],int size){
    int i,j,key;
    for(i=1;i<size;i++){
        key = arr[i];
        j=i-1;

        while(arr[j]>key && j>=0){
            arr[j+1]=arr[j];
            j=j-1;
        }
    arr[j+1]=key;
    }
}

int main(){
    int arr[50],i,size;
    cout<<"Enter the size of array: ";
    cin>>size;
    cout<<"Enter the element of array: ";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    insertionSort(arr,size);
    cout<<"Display Sorted array: ";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}