#include<iostream>
using namespace std;
//search a 2D matrix that is sorted in both row and coloumn wise
bool search(int arr[][5],int r, int c,int key){
    int rowindex = 0;
    int colindex = c- 1;
    while(rowindex<r && colindex >= 0){
    int element = arr[rowindex][colindex];
    if(element == key){
            return 1;
    }
    if(element<key){
        rowindex++;
    }
    if(element>key){
        colindex--;
    }
}
return 0;
}
int main(){
    int r,c,key;
    int arr[5][5];
    cout<<"Enter the rows and colums ";
    cin>>r >> c ;
    for(int i = 0 ; i < r ; i++){
        for(int j = 0; j < c ; j++){
            cout<<"enter the element for "<<i<<","<<j<<" = ";
            cin>>arr[i][j];
        }
    }
    cout<<"Enter the key = ";
    cin>>key;
    if(search(arr,r,c,key)){
        cout<<"key found";
    }
    else
    cout<<"key not found";
}