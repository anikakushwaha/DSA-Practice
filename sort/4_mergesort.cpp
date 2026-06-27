#include<iostream>
using namespace std;
//MERGE SORT 
void merge(int *arr,int s, int e){
    int mid = s + (e-s)/2;
    int len1 = mid -s +1;
    int len2 = e - mid;
    int * first = new int[len1];
    int * second = new int[len2];
    int mainarrindex = s;
    for(int i = 0 ; i < len1; i++){
        first[i] = arr[mainarrindex++];
    }
    mainarrindex = mid + 1;
    for(int i = 0 ; i < len2; i++){
        second[i] = arr[mainarrindex++];
    }
    //merge 2 sorted array
    int index1 = 0, index2 = 0;
    mainarrindex = s;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[mainarrindex++]=first[index1++];
        }
        else{
            arr[mainarrindex++]=second[index2++];
        }
    }
    while(index1<len1){
        arr[mainarrindex++]=first[index1++];
    }
    while(index2<len2){
        arr[mainarrindex++]=second[index2++];
    }
    delete []first;
    delete []second;
}
void mergesort(int *arr,int s,int e){
    //base case
    if(s>=e){
        return;
    }
    int mid = s +(e-s)/2;
    //left part sort
    mergesort(arr,s,mid);
    //right part sort
    mergesort(arr,mid+1,e);
    //merge
    merge(arr,s,e);
}
int main(){
    int arr[5]={1,9,4,2,5};
    mergesort(arr,0,4);
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}