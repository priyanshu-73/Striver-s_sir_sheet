#include<bits/stdc++.h>
using namespace std;

int uniquePaths(vector<int>& arr){
    int n = arr.size();
    int count = 0;
    for ( int i = 0; i < n; i++)
    {
        for(int j = i + 1; j<n; j++){
            if(arr[i]>2*arr[j]){
                count+=1;
            }
        }
    }return count;
    
}


int main()
{
    vector<int> m = {3,2,1,4};
    int ans = uniquePaths(m);
    cout << ans;
}