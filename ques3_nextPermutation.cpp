#include<bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> &A){
    int n = A.size();
    int ind = -1;
    for(int i = n - 2;i >= 0;i--){
        if(A[i] < A[i + 1]){
            ind = i;
            break;
        }
    }

    if(ind == -1){
        reverse(A.begin(), A.end());
        return A;
    }

    for(int i = n -1;i > ind;i--){
        if(A[i]>A[ind]){
            swap(A[i], A[ind]);
            break;
        }
    }
    reverse(A.begin() + ind + 1, A.end());
    return A;
}

int main(){
    vector<int> A = {2, 1, 5, 4, 3, 0, 0};
    vector<int> ans = nextPermutation(A);
    for(auto ele : ans){
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}