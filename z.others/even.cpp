#include<iostream>
using namespace std;
//odd-> 0
//even->1
bool isEven(int a){
    if(a&1){
        return 0;
    }
    return 1;
}
int main(){
    int num;
    cin>>num;
    if(isEven(num)){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }

}