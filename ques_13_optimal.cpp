#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n = matrix.size();
    int m = matrix[0].size();
    int low = 0;
    int high = m -1;
    while (low <= high)
    {
        int mid = (low + high / 2);
        if(matrix[mid/m][mid%m] == target){
            return true;
        }
        if(matrix[mid/m][mid%m] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    return false;
    }
    
}

int main()
{
    vector<vector<int>> arr = {{1,3,5,7},{10,11,16,20}, {23,30,34,60}};
    int target = 4;
    cout << searchMatrix(arr, target);
}