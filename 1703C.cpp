#include<iostream>
using namespace std;
void solve()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int x[n];
    int a=0;
    while(a<n){
        int p;cin>>p;
        string s;cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='U'){
                if(arr[a]==0){
                    arr[a] = 9;
                }
                else
                arr[a]--;

            }
            else{
                if(arr[a]==9) arr[a]=0;
                else
                arr[a]++;
            }
        }
        cout<<arr[a]<<" ";
        a++;
    }
    cout<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--) solve();
}