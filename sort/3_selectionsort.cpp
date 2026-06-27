#include<iostream>
using namespace std;
//SELECTION SORT USING RECURISON
void selectionsort(int *arr, int n)
{
    //base case
    if(n==1 || n==0){
        return ;
    }
    int minindex = arr[0];
    for(int i = 1; i< n-1;i++){
        
        if(arr[i]<minindex){
            minindex = arr[i];
        }
        swap(arr[i],minindex);
    }
    selectionsort(arr,n-1);
}
int main(){
    int arr[5]={1,9,4,2,5};
    selectionsort(arr,5);
    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}