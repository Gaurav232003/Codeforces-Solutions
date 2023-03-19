#include<iostream>
using namespace std;
void solve(){
int n;cin>>n;
int c=0,d=0;
string ss;cin>>ss;
char arr[26];
char arr2[26];
for(int i=0;i<26;i++) {arr[i] = 'x';arr2[i]='x';}
for(int i=0;i<ss.length();i++){
    if(arr[(int)ss[i] -97] =='x'){
        if(i%2==0) {
            arr[(int)ss[i] -97]='0';
            arr2[(int)ss[i] -97] =  '1';
        }
        else{
            arr[(int)ss[i] -97] = '1';
            arr2[(int)ss[i] -97] = '0';
        }
    }
    else{
        if(i%2==0){
            if(arr[(int)ss[i] -97]=='1'){
                c++;
            }
            if(arr2[(int)ss[i] -97]=='0'){
                d++;
            }
        }
        else{
            if(arr2[(int)ss[i] -97]=='1'){
                d++;
            }
            if(arr[(int)ss[i] -97]=='0'){
                c++;
            }
        }
    }
}
if(c==0 || d==0) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
int  main(){
    int t;cin>>t;
    while(t--) solve();
}