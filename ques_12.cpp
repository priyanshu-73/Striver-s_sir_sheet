#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int largest(int arr[], int n){
  int count  = 0;
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      if(arr[j] < arr[i]){
        count += 1;
      }
    }
  }
  return count;
}


int main() {
    int arr[] = {5, 3, 2, 1, 4};
    int n = 5;
    int ans = largest(arr, n);
    cout << ans;
    }
