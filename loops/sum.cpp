#include<iostream>
using namespace std;
int main(){
    int sum=0,i=1,n;
    cout<<"enter the number= ";
    cin>>n;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    } 
    cout<<"sum is="<<sum; 
}   