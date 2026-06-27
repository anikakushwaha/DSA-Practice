#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the charcter ";
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<"the character is upercase the lower case is "<<char(ch+32);
    }
    else{
        cout<<"the character is lower case the upper case is "<<char(ch-32);
    }
   return 0;
}