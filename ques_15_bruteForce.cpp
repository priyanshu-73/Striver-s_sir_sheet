#include<bits/stdc++.h>
using namespace std;

int repeat(int arr[], int n){
    float count = 0;
    float a = n / 2;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i]==arr[j]){
                count += 1;
            }
            if(count >= a){
                return arr[i];
            }
        }

    }
    return 0;
}

int main()
{
    int arr[] = {2,2,1,1,1,2,2};
    int n = 7
    ;
    cout << repeat(arr, n);
}