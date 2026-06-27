#include<iostream>
using namespace std;
bool valid(char ch){
    if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')||(ch>='0'&& ch<='9')){
        return 1;
    }
    return 0;
}
char lowercase(char ch){
    if((ch>='a'&& ch<='z')||(ch>='0'&& ch<='9')){
        return ch;
    }
    char temp=ch-'A'+'a';
    return temp;
}
bool checkpalindrome(string a){
    int s=0,e=a.length()-1;
    while(s<e){
        if(a[s]!=a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
bool check(string s){
    string temp = "";
    // to get alphanumeric numbers only
    for(int i=0; i< s.length(); i++){
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }
    // to change to lowercase
    for(int i=0; i< temp.length(); i++){
        temp[i]=lowercase(temp[i]);
    }
    return checkpalindrome(temp);
}
int main(){
    string s;
    cout<<"Enter the value in the string = ";
    cin>>s;
    if(check(s)==0){
        cout<<"not a palindrome";
    }
    else{
       cout<<"palindrome"; 
    }

}