#include<iostream>
using namespace std;
int duplicate(int arr[], int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    for(int i=0;i<n;i++){
        ans=ans^i;
    }
    return ans;
}    
int main(){
    int arr[10],n;
    cout<<"size= ";
    cin>>n;
    cout<<"elements = ";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Duplicate element = "<<duplicate(arr,n)<<endl;
}