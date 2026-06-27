#include<iostream>
using namespace std;
void rotate(int arr[][5],int r,int c){
    int ans[r][c];
    for(int i = 0; i < c; i++){
        for (int j = 0; j < r; j++){
            ans[i][j] = arr[r -1 - j][i]; 
        }
    }
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
int r,c;
    // use vector for better result
    int arr[5][5];
    cout<<"Enter the rows and colums ";
    cin>>r >> c ;
    for(int i = 0 ; i < r ; i++){
        for(int j = 0; j < c ; j++){
            cout<<"enter the element for "<<i<<","<<j<<" = ";
            cin>>arr[i][j];
        }
    }
    cout<<"after rotation : " << endl;
    rotate(arr,r,c);
}