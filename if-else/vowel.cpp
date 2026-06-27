#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the alphabet ";
    cin>>ch;
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        if(ch == 'a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            cout<<"vowel";
         }
        else {
            cout<<"consonat";
        }
    }
    else {
        cout<<"this is not an alphabet";
    }
return 0;
}