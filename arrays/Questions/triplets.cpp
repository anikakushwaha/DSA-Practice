#include<iostream>
using namespace std;
// find triplets with given sum
void triplets(int arr[],int n,int key){
    int i,j,k;
    for(i=0;i<n-2;i++){
        for(j=i+1;j<n-1;j++){
            for(k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==key){
                    cout<<arr[i] <<arr[j] <<arr[k] ;
                }
    }
    }
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int key=12;
    triplets(arr,5,12);
}