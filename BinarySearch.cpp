#include<iostream>
using namespace std;

/*void insertionSort(int arr[],int n){
    int i,j,key;
    for(i=1;i<n;i++){
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>=key){
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = key;
    }
}*/

int binarySearch(int arr[],int size,int value){
    int loc,beg,end,mid;
    loc = -1;
    beg = 0;
    end = size - 1;
    while (beg<=end)
    {
        mid = (beg+end)/2;
        if(value==arr[mid]){
            loc = mid;
            break;
        }else if(value > arr[mid]){
            beg = mid+1;

        }else{
            end = mid - 1;
        }
    }
    return(loc);
}

int main(){
    int i,size,loc,value;
    /*cout<<" Enter the size of array: ";
    cin>>size;
    cout<<"Enter the element of array: ";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    insertionSort(arr,size);
    cout<<"Display Sorted Array: ";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }*/
    int arr[]={1,2,3,4,5,6};
    size = 4;
    value=2;
    //cout<<"Enter the value to find in array: ";
    //cin>>value;
    loc = binarySearch(arr,size,value);
    if(loc = -1){
        cout<<"Element does  not exitin array: ";
    }else{
        cout<<"Element "<<value<<"\texist at position: "<<loc+1;
    }
}