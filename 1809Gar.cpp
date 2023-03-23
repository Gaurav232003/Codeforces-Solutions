#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int cntDistinct(string str)
{
    unordered_set<char> s;
    for (int i = 0; i < str.size(); i++) {
        s.insert(str[i]);
    }
    return s.size();
}
 
void solve(){
   string s;cin>>s;
   int c = cntDistinct(s);
   if(c==4) cout<<4<<endl;
   else if(c==3) cout<<4<<endl;
   else if(c==1) cout<<-1<<endl;
   else{
       if((s[0]==s[1]&&s[1]==s[2])||(s[1]==s[2]&&s[2]==s[3])||(s[0]==s[2]&&s[2]==s[3])||(s[0]==s[1]&&s[1]==s[3]))cout<<6<<endl;
       else cout<<4<<endl;
   }
}

int  main(){
    int t;cin>>t;
    while(t--) solve();
}