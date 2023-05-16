#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& arr, int target){
    sort(arr.begin(),  arr.end());
    int n = arr.size();
    vector<vector<int>> ans;
    for(int i = 0; i < n; i++){
        if(i > 0 && arr[i] == arr[i - 1]) continue;

        for(int j = i + 1; j < n; j++){
            if(j > i + 1 && arr[j] == arr[j - 1]) continue;

            int k = j + 1;
            int l = n - 1;
            while(k < l){
                long long sum = arr[i];
                sum += arr[j];
                sum += arr[k];
                sum += arr[l];
                if(sum == target){
                    vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                    ans.push_back(temp);
                    k++;
                    l--;
                    while(k < l && arr[k] == arr[k - 1]) k++;
                    while(k < l && arr[l] == arr[l + 1]) l--;
                }
                else if(sum < target) k++;
                else l--; 
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    int target = 9;
    vector<vector<int>> ans = fourSum(nums, target);
    cout << "The quadruplets are: \n";
    for (auto it : ans) {
        cout << "[";
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}
