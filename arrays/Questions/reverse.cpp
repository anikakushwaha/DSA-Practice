#include<iostream>
using namespace std;
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverse(int rev[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(rev[start],rev[end]);
        start++,end--;
    }
}
int main(){
    int arr[4]={1,2,4,5};
    int brr[5]={6,7,8,9,10};
    reverse(arr,4);
    reverse(brr,5);
    printArray(arr,4);
    printArray(brr,5);    
}