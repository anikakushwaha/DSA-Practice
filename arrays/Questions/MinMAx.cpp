#include<iostream>
#include<climits>
using namespace std;
int getmin(int num[],int n){
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(min > num[i]){
            min = num[i];
        }
    }
    return min;
}
int getmax(int num[],int n){
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(max < num[i]){
            max = num[i];
        }
    }
    return max;
}
int main(){
    int num[10],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    cout<<"the maximum value = "<<getmax(num,n)<<endl;
    cout<<"the minimum value = "<<getmin(num,n)<<endl;
}