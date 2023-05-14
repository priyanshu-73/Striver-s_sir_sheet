#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool targetElement(vector<vector<int>>& arr, int target){
    int n = arr.size();
    int m = arr[0].size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }return false;
}

int main() {
    vector<vector<int>> arr = {{1,3,5,7},{10,11,16,20}, {23,30,34,60}};
    int target = 4;
    int n = 3;
    int ans = targetElement(arr, target);
    cout << ans;
    }
