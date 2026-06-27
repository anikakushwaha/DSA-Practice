//nth stair by either going 1 step or 2 step at a time
#include<iostream>
using namespace std;
int countways(int n){
    //base case
    if(n < 0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    return countways(n-1) + countways(n - 2);
}
int main(){
    int n;
    cout<<"Enter the no of stairs = ";
    cin>>n;
    cout<<"No of ways to climb = "<< countways(n);
}