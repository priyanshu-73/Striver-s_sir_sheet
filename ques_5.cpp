#include<bits/stdc++.h>
using namespace std;

void sor012(int arr[], int n){
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while(mid <= high){
        if (arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++ ;
        }
        else if(arr[mid] == 1 ){
            mid ++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }        
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = { 1, 0, 1, 2, 0, 1, 2, 0, 1};
    int n = 9;
    sor012(arr, n);
    printArray(arr, n);
    
}