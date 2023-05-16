#include <iostream>
#include <vector>

using namespace std;

vector<int> pairTarget(vector<int>& arr, int target) {
    int n = arr.size();
    vector<int> ans;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i] + arr[j] == target){
                cout << "YES" << endl;
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
           
        }
    }
    cout<<"No"<<endl;
    return {-1, -1};
}

int main() {
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> ans = pairTarget(arr, target);
    cout << ans[0] << " " << ans[1]; 
}
