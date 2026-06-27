#include<iostream>
using namespace std;
// swaping alternative elements in an array
void altSwap(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
        swap(arr[i],arr[i+1]);
    }
}
}
int main(){
    int arr[5]={1,2,3,4,5};
    altSwap(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}