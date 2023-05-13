#include<bits/stdc++.h>
#include<iostream>
using namespace std;


vector<int> find(vector<int> &A){
  int n = A.size();
  vector<int> ans;
  long long S = (n * (n + 1))/2;
  long long P = (n * (n + 1)*(2 * n + 1))/6;
  int missingNumber = 0, repeatingNumber = 0;
  for(int i = 0; i < n; i++){
    S -= (long long) A[i];
    P -= (long long) A[i] * (long long) A[i];
  }
  missingNumber = (S + P/S)/2;
  repeatingNumber = missingNumber - S;
  ans.push_back(repeatingNumber);
  ans.push_back(missingNumber);
  return ans;
}


int main() {
    vector<int> arr1 = {1, 2, 4, 5, 2};
    vector<int> ans = find(arr1);
    for(int i =0; i<ans.size();i++){
      cout<<ans[i]<<" ";
    }
    return 0;
    }
