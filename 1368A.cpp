#include<iostream>
using namespace std;

void solve(){
    int a,b,n;cin>>a>>b>>n;
    int c=0;
    while(a<=n && b<=n){
        int x=max(a,b),y=min(a,b);
        y+=x;
        c++;
        a=x;b=y;
    }
    cout<<c<<endl;
}

int main(){
    int t;cin>>t;
    while(t--) solve();
}