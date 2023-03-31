#include<iostream>
using namespace std;
void solve(){
   int n;cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   for(int i=0;i<n;i++){
       if(arr[i]<=i+1) {
           cout<<"YES"<<endl;
           return;
       }
   }
   cout<<"NO"<<endl;
}
int  main(){
    int t;cin>>t;
    while(t--) solve();
}