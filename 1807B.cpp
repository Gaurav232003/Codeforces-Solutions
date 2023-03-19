#include<iostream>
using namespace std;
void solve(){
int n;cin>>n;
int odd=0,eve=0;
while(n--){
    int x;cin>>x;
    if(x%2==0) eve+=x;
    else odd+=x;
}
if(eve>odd) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
int  main(){
    int t;cin>>t;
    while(t--) solve();
}