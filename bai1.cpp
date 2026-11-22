#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<ll>digits;

void getdigits(ll n){
    digits.clear();
    while (n!=0){
        digits.push_back(n%10);
        n/=10;
    }
}

int main(){
  freopen("MAXNUM.INP","r",stdin);
  freopen("MAXNUM.OUT","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll n;
    cin>>n;
    ll res=0;
    getdigits(n);
    do{
            ll num=0;
        for (ll v:digits){
            num=num*10+v;
        }
        if (num<n){
            res=max(res,num);
        }
    }
    while (next_permutation(digits.begin(),digits.end()));
    cout<<res;
    return 0;
}
