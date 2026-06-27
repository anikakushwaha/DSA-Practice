#include<iostream>
using namespace std;
int main(){
    int amt,note=0;
    cout << "Enter the amount = ";
    cin >> amt;
    switch(1){
        case 1: {
            note=amt/100;
            amt=amt-(note*100);
            cout<<"100rs note ="<<note<<endl;
        }
        case 2: {
            note=amt/50;
            amt=amt-(note*50);
            cout<<"50rs note ="<<note<<endl;
        }    
        case 3: {
            note=amt/20;
            amt=amt-(note*20);
            cout<<"20rs note ="<<note<<endl;
        }    
        case 4: {
            note=amt;
            cout<<"1rs note ="<<note<<endl; 
        }           
    }
}