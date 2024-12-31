#include<iostream>
using namespace std;

int main(){
    int i,n,post,pre;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[50];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the position which element delete: ";
    cin>>post;
    pre = arr[post-1];
    for(i=post-1;i<n-1;i++){
        arr[i] = arr[i+1];
    }

    n--;
    cout<<"Display of array After delete elemen in array: ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}