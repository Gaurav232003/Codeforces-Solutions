#include<iostream>
using namespace std;
void solve(){
   int n,d;cin>>n>>d;
   string ss;cin>>ss;
   for(int i=0;i<=n-1;i++){
       if(int(ss[i])-48<d){
           ss.insert(i,to_string(d));
           cout<<ss<<endl;
           return;
       }
     
   }
   cout<<ss<<d<<endl;
}
int  main(){
    long long int t;cin>>t;
    while(t--) solve();
}