#include<bits/stdc++.h>
using namespace std;


int duplicates(vector<int> & arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n - 1; i++){
      if(arr[i] == arr[i + 1]){
        return arr[i];
      }
    }
} 


int main() {
    vector<int> arr1 = {1, 2, 7, 4,7,8, 10};
    cout << "The number that are repeated are: " << duplicates(arr1);
  }
