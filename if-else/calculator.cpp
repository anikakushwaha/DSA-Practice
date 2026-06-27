#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout << "Enter the value of a = ";
    cin >> a;
    cout << "Enter the value of b = ";
    cin >> b;
    cout << "Enter the operation = ";
    cin >> op;
    switch(op){
        case '+':cout << (a + b);
                break;
        case '-':cout << (a - b);
                break;
        case '*':cout << (a * b);
                break;
        case '/':cout << (a / b);
                break;  
        case '%':cout << (a % b);
                break;                     
    }
}