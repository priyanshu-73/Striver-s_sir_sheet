#include<bits/stdc++.h>
using namespace std;

int pascalTraingle(int n){
    long long ans = 1;
    cout<<ans<<" ";
    for(int c = 1; c < n;c++){
        ans = ans * (n - c);
        ans = ans/c;
        cout<<ans<<" ";
    }
    cout<<endl;
}

int main(){
    int n = 5;
    pascalTraingle(n);
    cout<<endl;
}