#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;

int main() {
    // your code goes here
    ll n;
    cin>>n;
    ll a[n];
    unordered_map<ll,ll> m;
    for(auto i=0;i<n;i++){
           cin>>a[i];
           m[a[i]]++;
    }

    sort(a,a+n);
    ll ans= a[n-1]-a[0];
    ll res;
    if(a[n-1]==a[0])    res=n*(n-1)/2;
    else
        res= m[a[n-1]]*m[a[0]];
    cout<<ans<<" "<<res;
    return 0;
}
