#include<iostream>
using namespace std;
bool find(int arr[][4],int key,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(key==arr[i][j]){
                return 1;
            }
        }
    }
return 0;    
}
int main(){
    int arr[4][4];
    int row,col;
    cout<<"Enter the row = ";
    cin>>row;
    cout<<"Enter the col = ";
    cin>>col;   
    cout<<"Enter the elements = ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    int key;
    cout<<"enter the element to find = ";
    cin>>key;
    if(find(arr,key,row,col)){
        cout<<"element is present";
    }
    else{
        cout<<"element is not present";
    }
/*  
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
*/
    return 0;
}