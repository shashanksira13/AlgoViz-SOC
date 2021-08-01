#include<bits/stdc++.h>
 
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
string a,b;
bitset<300000> b1;
void solve(){
    int n,m; cin>>n>>m;
    if(n>=27) cout<<m<<endl;
    else{
        int k=pow(2,n);
        cout<<m%k<<endl;
    }
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; t=1;
    while(t-->0){
        solve();
    }
 
}
