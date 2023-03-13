#include<iostream>
using namespace std;
void solve(){
    int a,b;cin>>a>>b;
    if(a==0){
        cout<<(2*abs(b))-1<<endl;
        return;
    }
    if(b==0){
        cout<<(2*abs(a))-1<<endl;
        return;
    }
    
    else{
        a=abs(a);
        b=abs(b);
        if(a==b){
            cout<<a*2<<endl;
            return;
        }
        cout<<min(a,b)*2 + (2*(max(a,b)-min(a,b))-1)<<endl;
    }
}
int main(){
    int t;cin>>t;
    while(t--) solve();
}