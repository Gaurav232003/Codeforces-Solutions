#include<iostream>
using namespace std;

void solve(){
    int a,b,k;cin>>a>>b>>k;
    int arr1[a];
    for(int i=0;i<a;i++) cin>>arr1[i];
    int c=0;
    int x;
    for(int i=0;i<b;i++){
        cin>>x;
        for(int i=0;i<a;i++){
            if(arr1[i]+x<=k) c++;
        }
    }
    cout<<c<<endl;
}

int main(){
    int t;cin>>t;
    while(t--) solve();
}