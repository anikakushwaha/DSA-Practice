#include<iostream>
#include <algorithm>
using namespace std;
void reverse(string &str,int s,int e){
    //base case
    if(s>e)
    return;
    swap(str[s],str[e]);
    s++;
    e--;
    reverse(str,s,e);

}
int main(){
   string name = "Anika";
   reverse(name,0,name.length()-1);
   cout<<name;
}