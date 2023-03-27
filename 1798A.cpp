#include<iostream>
using namespace std;
void solve(){
   int n;cin>>n;
   int arr[n],brr[n];
   for(int i=0;i<n;i++) cin>>arr[i];
   for(int i=0;i<n;i++) cin>>brr[i];
   for(int i=0;i<n-1;i++){
       if(max(arr[i],brr[i])>max(arr[n-1],brr[n-1]) || min(arr[i],brr[i])>min(arr[n-1],brr[n-1])) {
           cout<<"NO"<<endl;
           return;
       }
   }
   cout<<"YES"<<endl;
}
int  main(){
    int t;cin>>t;
    while(t--) solve();
}