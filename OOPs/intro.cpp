#include<iostream>
using namespace std;
class Hero{
    //properties
    public:
    int health;
    char level;

    void print(){
        cout<<level<<endl;
    }
};
int main(){
    //creating object
    Hero ramesh;
    ramesh.health = 70;
    ramesh.level = 'S';
    cout<<"Health is :"<<ramesh.health<<endl;
    cout<<"Level is :"<<ramesh.level<<endl;
    cout<<"size = "<<sizeof(ramesh);//padding

}