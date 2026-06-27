#include<iostream>
using namespace std;
void sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    cout<<sum<<endl;
}
int main(){
    int size,num[10];
    cout<<"enter the size of = ";
    cin>>size;
    cout<<"enter the elements of array = ";
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    sum(num,size);
    return 0;
}
