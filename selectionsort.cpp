#include<iostream>
using namespace std;

void selectionSort(int arr[],int size){
    int i,j,min_index;
    for(i=0;i<size-1;i++){
        min_index = i;
        for(j=i+1;j<size;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        swap(arr[min_index],arr[i]);
        }
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
    selectionSort(arr,size);
    cout<<"Display sorted array: ";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}