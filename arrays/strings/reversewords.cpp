#include<iostream>
using namespace std;
void reverse(string a){
    int s=0,e=n-1;
    while(s<e){
        swap(a[s++],a[e--]);
    }
}
string reverse(string s){
    string temp;
    for(int i=0;i<s.length();i++){
        while(i=!'\0'){
        while(i=!' '){
            temp[i]=s[i];
        }
        reverse(temp);
        }    
    }
}
int main(){
    string s;
    cout<<"Enter the value in the string = ";
    cin>>s;
    cout<<"reversed = "<<reverse(s);
}