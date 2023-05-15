#include<bits/stdc++.h>
using namespace std;

int countPaths(int i, int j,int m, int n){
    if(i == (n -1) && j == (m -1)) return 1;
    if(i >= n || j >= m ) return 0;
    else return countPaths(i + 1, j, m, n) + countPaths(i, j + 1, m, n);
}
int uniquePaths(int n, int m){
    return countPaths(0, 0, n, m);
}


int main()
{
    int m = 7;
    int n = 3;
    int ans = uniquePaths(n, m);
    cout << ans;
}