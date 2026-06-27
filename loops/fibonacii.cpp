#include<iostream>
using namespace std;
int main(){
    int n,next,a=0,b=1;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        next=a+b;
        cout<<next<<" ";
        a=b;
        b=next;
    } 
}