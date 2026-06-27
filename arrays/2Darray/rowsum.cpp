#include<iostream>
using namespace std;
int main(){
    int arr[2][2]={1,2,3,4};
    for(int i=0;i<2;i++){
        int sum=0;
        cout<<"sum of row "<<i<<"=";
        for(int j=0;j<2;j++){
            sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
    }
}   