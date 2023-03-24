#include<iostream>
using namespace std;
void solve(){
    int n;cin>>n;
    string s1,s2;cin>>s1>>s2;
    int c=0;
    for(int i=0;i<n;i++){
        c+=min(abs((int)s1[i] - (int)s2[i]),9-max((int)s1[i],(int)s2[i]) + min((int)s1[i],((int)s2[i]))+1);
    }
    cout<<c;
}
int main(){
    solve();
}