#include<iostream>
using namespace std;
int main(){
    int arr[9]={1,0,1,2,2,2,0,1,0};
    int low=0,mid=0,high=8;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++,low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        // if 2
        else  {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
        for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }  
}