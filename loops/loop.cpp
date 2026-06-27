#include<iostream>
using namespace std;
int main(){
    int n,i=1;
    cout<<"Enter the value of n=";
    cin>>n;
    cout<<"printing count from 1 to n"<<endl;
    for( ; ; ){
        if(i<=n){
            cout<<i<<endl;
        }
        else{
            break;
        }
        i++;
    }
}
