//to check if array is sorted or not
#include<iostream>
using namespace std;
bool isSorted(int arr[],int n){
    //base case
    if(n==0||n==1){
        return true;
    }
    if(arr[0]>arr[1])
    return false;
    else{
    bool ans = isSorted(arr+1,n-1);
    return ans;
    }
}
int main(){
    int arr[6] = {2,22,6,9,11,13};
    if(isSorted(arr,6)){
        cout<<"sorted";
    }
    else
    cout<<"Not sorted";
}