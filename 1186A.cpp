#include<iostream>
using namespace std;

int main(){
    int n,k,m;cin>>n>>k>>m;
    if(min(k,m)>=n) cout<<"YES"<<endl;
    else cout<<"NO";
}