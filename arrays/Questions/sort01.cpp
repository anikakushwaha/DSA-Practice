#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,0,0,1,0,0};
    int i=0,j=5;
    while(i<j){
    if(arr[i]==0){
        i++;
        //to print 0 if already present at left
    }
    if(arr[j]==1){
        j--;
        // to print 1 if already present at right
    }
    if(arr[i]==1 && arr[j]==0){
        swap(arr[i],arr[j]);
        i++,j--;
        //swapping i and j  
    }  
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }  
}
}