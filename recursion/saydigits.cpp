#include<iostream>
using namespace std;
void saydigit(int n,string arr[]){
    //base case
    if(n==0)
    return;
    //processing
    int x = n % 10;
    n = n/10;
    //recursive call
    saydigit(n,arr);
    cout <<arr[x]<<" ";
}
int main(){
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cout<<"Enter the digit = ";
    cin>>n;
    saydigit(n,arr);
}