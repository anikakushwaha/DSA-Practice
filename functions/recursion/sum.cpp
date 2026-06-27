#include<iostream>
using namespace std;
int sum(int arr[],int n){
    //base case
    if(n == 0){
    return 0;
    }
    if(n == 1){
    return arr[0];
    }
    int remainpart = sum(arr + 1, n -1);
    int sum = arr[0] + remainpart;
    return sum;
    
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"sum = "<<sum(arr,5);

}