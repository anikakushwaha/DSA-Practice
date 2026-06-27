#include<iostream>
using namespace std;
//QUICK SORT
int partition(int arr[],int s, int e){
    int count = 0;
    int pivot = arr[s];
    for(int i = s+1; i<=e; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotindex = s + count;
    swap(arr[s],arr[pivotindex]);
    //left and right wala part
    int i = s;
    int j = e;
    while(i<pivotindex && j>pivotindex){
        if(arr[i] > pivot && arr[j] < pivot){
            swap(arr[i++],arr[j--]);
        }
        while(arr[j] > pivot){
            j--;
        }
        while(arr[i] < pivot){
            i++;
        }
    }
    return pivotindex;

}
void quicksort(int *arr, int s, int e){
    //base case
    if(s>=e){
        return ;
    }
    int p = partition(arr,s,e);
    //left wala part sort
    quicksort(arr,s,p-1);
    //right wala part sort
    quicksort(arr,p+1,e);
}
int main(){
    int arr[5]={4,1,3,5,2};
    quicksort(arr,0,4);
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}