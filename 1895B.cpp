#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin>>n;
    int arr[2*n];
    for(int i=0;i<2*n;i++) cin>>arr[i];
    sort(arr,arr+2*n,greater<int>());
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=(arr[i]-arr[i+1])+(arr[i+n]-arr[i+1+n]);
    }
    cout<<sum<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<arr[i+n]<<endl;
    }
}
int main(){
    int t;cin>>t;
    while(t--) solve();
}