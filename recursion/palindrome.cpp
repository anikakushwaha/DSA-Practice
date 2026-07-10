#include<iostream>
#include <algorithm>
using namespace std;
bool palindrome(string &str,int s,int e){
    //base case
    if(s>e)
    return true;
    if(str[s]!=str[e])
    return false;
    else
    return(str,s+1,e-1);

}
int main(){
   string name = "dad";
   bool ans = palindrome(name,0,name.length()-1);
   if(ans)
   cout<<"Palindrome";
   else
   cout<<"Not Palindrome";
}