#include<bits/stdc++.h>
using namespace std;

int majorityEle(vector<int>& arr){
    int n  = arr.size();
    int cnt = 0;
    int ele;
    for(int i = 0; i < n; i++){
        if(cnt == 0){
            cnt = 1;
            ele = arr[i];
        }
        else if(ele == arr[i]){
            cnt++;
        }
        else cnt--;
    }

    int cnt1 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == ele) cnt1++;
    }
    if(cnt1 > (n / 2)){
        return ele;
    }
}
int main()
{
    vector<int> arr = {3, 2, 3};
    int n = 3;
    cout << majorityEle(arr);
}