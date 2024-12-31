#include<iostream>
using namespace std;

int partition(int arr[], int start, int end){
    int pivot = end-start;
    for(int i = start; i<end, i++){
        if(arr[i]>arr)
    }
}

void quickSort(int arr[],int start, int end){
    if(start >= end){
        return;
    }
    int pivot = partition(arr,start,end);
    //left side
    quickSort( arr[],start,pivot);
    //right side 
    quickSort( arr[],pivot+1,end);
}