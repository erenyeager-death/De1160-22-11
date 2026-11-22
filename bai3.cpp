#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  //  freopen("MILK.INP", "r", stdin);
   // freopen("MILK.OUT", "w", stdout);

    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>>a(m);
    for (int i=0;i<m;i++)cin>>a[i].first>>a[i].second;

    sort(a.begin(),a.end());
    ll ans=0;
    for (int i=0;i<m && n > 0; i++) {
        ll q=min(n,a[i].second);
        ans+=q*a[i].first;
        n-=q;
    }
    cout<<ans;
    return 0;
}
