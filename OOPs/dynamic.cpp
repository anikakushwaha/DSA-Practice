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
};
int main(){
    Hero *h = new Hero;
    (*h).sethealth(70);
    (*h).level = 'A';
    cout<<"Level : "<<(*h).level<<endl;
    cout<<"Health : "<<(*h).gethealth()<<endl;
    h -> sethealth(90);
    h -> level = 'S';
    cout<<"Level : "<<h -> level<<endl;
    cout<<"Health : "<<h -> gethealth()<<endl;
    delete h;
    h = nullptr;
}