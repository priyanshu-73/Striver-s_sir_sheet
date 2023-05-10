#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(int arr[], int n){
    int maxi = INT32_MIN;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            maxi = max(maxi, sum);
        }
    }
    return maxi;
}

int main(){
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = maxSubArraySum(arr, n);
    cout<<ans<<endl;
    return 0;
}