#include<iostream>
using namespace std;
int main(){
    int arr[10],n;
    cout<<"enter the size of array = ";
    cin>>n;
    cout<<"enter the elements = ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        bool swapped=false;
        for(int j=0 ; j<n-i ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        break;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}