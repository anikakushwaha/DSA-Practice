#include<iostream>
using namespace std;
//to tell if an element is present in an array
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10],n,key;
    cout<<"size=";
    cin>>n;
    cout<<"elements=";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"to search=";
    cin>>key;
    bool found=search(arr,n,key);
    if(found){
        cout<<"element is present";
    }
    else{
        cout<<"element is not present";
    }
}