#include<iostream>
using namespace std;
void spiral(int arr[][5],int r,int c){
    int total = r*c ; 
    int count = 0;
    // starting row, starting col, ending row, ending col
    int sr = 0 , sc = 0;
    int er = r -1 , ec = c - 1;
    while(count < total){
        for(int i = sc; i<=ec && count < total; i++){
            cout << arr[sr][i]<<" ";
            count ++ ;
        }
        sr++;
        for(int i = sr; i<=er && count < total; i++){
            cout << arr[i][ec]<<" ";
            count ++ ;
        }
        ec--;
        for(int i = ec; i>=sc && count < total; i--){
            cout << arr[er][i] <<" ";
            count ++ ;
        }
        er--;
        for(int i = er; i>=sr && count < total; i--){
            cout << arr[i][sc]<<" ";
            count ++ ;
        }
        sc++;
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
    cout<<"Spiral print : ";
    spiral(arr,r,c);
}