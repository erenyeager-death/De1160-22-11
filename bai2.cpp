#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s,t;
    cin>>s>>t;
    ll n=s.length();
    ll m=t.length();
    vector<vector<ll>>dp(n+1,vector<ll>(m+1,0));
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if (s[i-1]==t[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    cout<<n+m-2*dp[n][m];
    return 0;
}
