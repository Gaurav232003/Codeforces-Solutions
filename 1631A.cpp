#include<iostream>
using namespace std;
void solve(){
    int n;cin>>n;
    int arr[n],brr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++) cin>>brr[i];
    for(int i=0;i<n;i++){
        if(arr[i]>brr[i]){
            int t=arr[i];
            arr[i] = brr[i];
            brr[i] = t;
        }
    }
    int a=INT16_MIN,b=INT16_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>a) a=arr[i];
        if(brr[i]>b) b = brr[i];
    }
    cout<<a*b<<endl;
}
int main(){
    int t;cin>>t;
    while(t--) solve();
}