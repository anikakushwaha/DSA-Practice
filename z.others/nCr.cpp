#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int nCr(){
    int n,r,ans;
    cout<<"enter value of n= ";
    cin>>n;
    cout<<"enter value of r= ";
    cin>>r;
    
    ans = fact(n)/(fact(r)*fact(n-r));
    return ans;
}
int main(){
    int ans;
    ans = nCr();  
    cout<<"nCr = "<<ans;
    return 0;
}