#include<bits/stdc++.h>
using namespace std;

int stock(vector<int> &arr){
    int n = arr.size();
    int maxPro = 0;
    int minPro = INT32_MAX;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[j] > arr[i]){
                maxPro = max(maxPro, arr[j] - arr[i]);
            }
        }
    }
    return maxPro;
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    vector<int> arr = {7,1,5,3,6,4};
    cout << stock(arr);
    
}