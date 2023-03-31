#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
   int n;cin>>n;
   if(n%2==0){
       cout<<-1<<endl;
       return;
   }
   stack<int> s;
   vector<int> v;
   int m=n;
   while(true){
       if(m==3){
           s.push(m);
           break;
       }
       s.push(m);
       m=m/2 %2 ==0?m/2 +1:m/2;
       
       
   }
   int x=1;
   while(true){
       int a=s.top();
       
       s.pop();
       if(2*x - 1 == a) v.push_back(1);
       else v.push_back(2);
       x=a;
       if(a==n) {
           cout<<v.size()<<endl;
           for(auto i=0;i<v.size();i++) cout<<v[i]<<" ";
           cout<<endl;
           return;
       }
   }
}
int  main(){
    int t;cin>>t;
    while(t--) solve();
}