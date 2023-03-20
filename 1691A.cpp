#include<iostream>
using namespace std;
void solve(){
    int n;cin>>n;
    int c=0,d=0;
    while(n--){
        int x;cin>>x;
        if(x%2==0) c++;
        else d++;
    }
    cout<<min(c,d)<<endl;
    
}
int  main(){
    int t;cin>>t;
    while(t--) solve();
}