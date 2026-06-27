#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,5,8,2,4};
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }    
}