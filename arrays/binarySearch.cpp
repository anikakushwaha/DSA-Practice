#include<iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2 ;
    while(start <= end){
        if(arr[mid]==key){
            return mid;
        }
        //go right
        if(arr[mid]<key){
            start = mid + 1;
        }
        //go left
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2 ;
    }
    return -1;
}
int main(){
    int odd[5] = {2,4,5,6,7};
    int even[6] = {1,2,4,6,8,9};
    int oddindex = BinarySearch(odd,5,7);
    int evenindex= BinarySearch(even,6,4);
    cout<<"index of odd key = "<< oddindex<<endl;
    cout<<"index of even key = "<< evenindex<<endl;
    return 0;
}