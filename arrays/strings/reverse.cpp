#include<iostream>
using namespace std;
void reverse(char arr[],int n){
    int s=0,e=n-1;
    while(s<e){
        swap(arr[s++],arr[e--]);
    }
}
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[10];
    cout<<"Enter the name = ";
    cin>>name;
    int len=getlength(name);
    reverse(name,len);
    cout<<"name after reverse = ";
    cout<<name;
}