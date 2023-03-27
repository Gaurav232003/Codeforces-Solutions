#include<iostream>
#include<bits/stdc++.h>


using namespace std;


void solve(){
    map<int,int> xx;
   int m;cin>>m;
   for(int i=1;i<=m;i++){
       int n;cin>>n;
       for(int j=0;j<n;j++){
           int a;cin>>a;
           if(i==1){
               xx.insert({a,i});
           }
           else{
          
          
         if (xx.find(a) != xx.end())
          xx.erase(a);
          xx.insert({a,i});
       }
       }
   }
   int c=0;
   int arr[m] = {0};
   for (auto i : xx){
       if(arr[i.second-1]==0){
           
           arr[i.second-1] = i.first;
           c++;
       }
   }
   if(c!=m){
       cout<<-1<<endl;
   } 
   else{
       for(int i=0;i<m;i++){
           cout<<arr[i] <<" ";
       }
       cout<<endl;
   }
}


int  main(){
    int t;cin>>t;
    while(t--) solve();
}  