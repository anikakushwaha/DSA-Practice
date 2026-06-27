#include<iostream>
using namespace std;
int main(){
    //implicit conversion
    char grade='a';
    int value=grade;
    cout<<value<<endl;
    //explicit conversion
    double price = 100.99;
    int newPrice=(int)price;
    cout<<newPrice<<endl;
    return 0;
}