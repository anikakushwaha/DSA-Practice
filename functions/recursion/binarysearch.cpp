#include<iostream>
using namespace std;
bool binarysearch(int arr[],int s,int e,int key){
    //base case
    if(s>e)
    return false;
    
    int mid = s + (e-s)/2;

    if(arr[mid]==key)
    return true;

    if(arr[mid]<key)
    return binarysearch(arr,mid+1,e,key);
    else
    return binarysearch(arr,s,mid-1,key);

}
int main(){
    int arr[6] = {2,4,6,10,14,16};
    int key = 2;
    cout<<binarysearch(arr,0,5,key);
}