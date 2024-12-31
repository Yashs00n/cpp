#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int start, int mid, int end){
    int left = start, right = mid,index=0;
    vector<int>temp(end - start);
    while(start < end){
        if(left < right){
            temp[index] = arr[left];
            index++;
            left ++;
        }
        else{
            temp[index] = arr[right];
            index ++;
            right ++;
        }
    }
    while(left <= mid){
        temp[index] = arr[left];
        index ++;
        left ++;
    }
    while(right <= mid){
        temp[index] = arr[right];
        index ++;
        left ++;
    }

    index = 0;
    while(start < end){
        arr[start] = temp[index];
        start ++;
        index ++;
    }
}

void mergSort(int arr[], int start, int end){
    if (start == end){
        return;
    }
    int mid = start + (end - start)/2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    merge(arr,start,mid,end);
}
int main(){
    int arr[] = {22,55,33,565,44,332,22,11}
    mergeSort(arr,0,7);
    for(int i = 0; i < 7;i++){
        cout<<arr[i]<<" ";
    }
}