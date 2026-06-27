#include<iostream>
using namespace std;
bool binarysearch(int arr[][5],int r, int c, int key){
    int s = 0;
    int e = (r*c)-1;
    while(s<=e){
        int mid = s + (e-s)/2 ;
        int element = arr[mid/c][mid%c];
        if(element == key){
            return true;
        }
        if(element < key){
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return false;
}
int main(){
    int r,c,key;
    int arr[5][5];
    cout<<"Enter the rows and colums ";
    cin>>r >> c ;
    for(int i = 0 ; i < r ; i++){
        for(int j = 0; j < c ; j++){
            cout<<"enter the element for "<<i<<","<<j<<" = ";
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the key = ";
    cin>>key;
    if(binarysearch(arr,r,c,key)){
        cout<<"key found";
    }
    else
    cout<<"key not found";
}