#include<iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;
string ToStr( char c ) {
   return string( 1, c );
}
void solve(){
   int n;cin>>n;
   string ss;cin>>ss;
   int f=0;
   vector<int> v[26];
   for(int i=0;i<ss.length();i++) v[(int)ss[i]-97].push_back(i);
   int e=-1;
   for(int i=0;i<26;i++){
       if(f==1) {
           cout<<ss<<endl;
           return;
       }
       if(v[i].size()!=0){
           f=1;
           if(v[i][0]!=e+1){
               ss.insert(e+1,ToStr((char)(i+97)));
               ss.erase(v[i][v[i].size()-1]+1,1);
               cout<<ss<<endl;
               return;
           }
           else{
               for(int j=0;j<v[i].size()-1;j++){
                   if(1+v[i][j]!=v[i][j+1]){
                       ss.insert(v[i][0],ToStr((char)i+97));
                       ss.erase(v[i][v[i].size()-1]+1,1);
                       cout<<ss<<endl;
                       return;
                   }
               }
           }
           e=v[i][v[i].size()-1];
       }
   }
   cout<<ss<<endl;
}
int  main(){
    int t;cin>>t;
    while(t--) solve();
}