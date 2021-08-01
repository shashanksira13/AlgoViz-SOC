#include <bits/stdc++.h>
 
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;
void solve(){
	int n,c; cin>>n>>c;
	int x[n];
	for(int i=0;i<n;i++) cin>>x[i];
	sort(x,x+n);
	int l=1,r=1e9+1,req;
	while(l<=r){
		int m=l+(r-l)/2;	
		int prev=x[0], count{1};
		for(int i=1;i<n;i++){
			if(x[i]-prev>=m){
				prev=x[i];
				count++;				
			}
		}
		if(count<c){
			r=m-1;
		}
		else{
			req=m;
			l=m+1;
		} 		
	}
	cout<<req<<endl;
	
}
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin>>t;
    while(t-->0){
        solve();
    }
 
}
 
