#include<iostream>
using namespace std;
bool linearsearch(int arr[],int n,int key){
    //base case
    if(n==0){
        return false;
    }
    if(arr[0]==key)
    return true;
    else{
        bool remainpart=linearsearch(arr+1,n-1,key);
        return remainpart;
    }
}
int main(){
    int arr[5] = {3,5,1,2,6};
    int key = 2;
    cout<<linearsearch(arr,5,2);
}