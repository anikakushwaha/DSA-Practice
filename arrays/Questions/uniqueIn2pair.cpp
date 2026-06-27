#include<iostream>
using namespace std;
//to find unique element in an array where all other elements appear exactly twice.
void unique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    cout<<"the unique elemet in the array is = ";
    cout<<ans;
}
int main(){
    int arr[10],n,ans;
    cout<<"enter the size= ";
    cin>>n;
    cout<<"enter the elements = ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unique(arr,n);
}