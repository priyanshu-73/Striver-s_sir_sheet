#include<bits/stdc++.h>
using namespace std;

int nCr(int n, int r){
    long long res = 1;
    for(int i = 0; i < r;i++){
        res = res * (n - i);
        res = res / (i + 1);
    } 
    return res;
}

vector<vector<int>> pascalTriangle(int n){
    vector<vector<int>> ans;
    for(int row = 1;row <= n;row++){
        vector<int> templst;
        for(int col = 1;col <= row;col++){
            templst.push_back(nCr(row - 1, col - 1));
        }
        ans.push_back(templst);
    }
    return ans;
}

int main(){
    int n = 5;
    vector<vector<int>> ans = pascalTriangle(n);
    for(auto it : ans ){
        for(auto ele : it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;

}