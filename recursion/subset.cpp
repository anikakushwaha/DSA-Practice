#include<iostream>
using namespace std;
vector<vector<int>> subsets(vector<int> &arr) {
    
}
int main() {
    vector<int> arr = { 1, 2, 3 };
    vector<vector<int>> res = subsets(arr);
    for (int i = 0; i < res.size(); i++) {
        cout << "[";
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j];
            if (j != res[i].size() - 1) cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}