#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            swap(arr[j][i], arr[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        reverse(arr[i].begin(), arr[i].end());
    }
}


void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main() {
  vector < vector < int >> arr;
  arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  rotate(arr);
  cout << "Rotated Image" << endl;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr.size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }

}
