#include<iostream>
using namespace std;
class Hero{
    int health;
    public:  
    char level;
    int gethealth(){
        return health;
    }
    void sethealth(int h){
        health = h;
    }
    void print(){
        cout<<level<<endl;
    }
};
int main(){
    Hero ramesh;
    ramesh.sethealth(70);
    ramesh.level = 'S';
    cout<<"Health is : "<<ramesh.gethealth()<<endl;
    cout<<"Level is : "<<ramesh.level<<endl;
    cout<<"size = "<<sizeof(ramesh);//padding

}