#include<iostream>
#include<vector>
using namespace std;
void solve(string str, vector<string> &ans, int i){
    //base case
    if(i>=str.size()){
        ans.push_back(str);
        return;
    }
    for(int j = i; j<str.size();j++){
        swap(str[i],str[j]);
        solve(str,ans,i+1);
        //backtracking
        swap(str[i],str[j]);
    }
}
void permute(string &str){
    vector<string>ans;
    int index = 0;
    solve(str,ans,index);
    for(string s : ans)
        cout << s <<" ";
}
int main(){
    string str="abc";
    permute(str);
}