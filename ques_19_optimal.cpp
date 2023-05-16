#include<bits/stdc++.h>
using namespace std;

string pairTarget(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end());
    vector<int> ans;
    int n = arr.size();
    int low = 0, high = n - 1;
    while (low < high){
        int sum = arr[low] + arr[high];
        if(sum == target){
            return "YES";
        }
        else if(sum < target) low++;
        else high--;
        }
        return "NO";
}

int main() {
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    cout << pairTarget(arr, target); 
}
